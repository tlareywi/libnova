/*
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU Library General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA. 

Copyright (C) 2000 Liam Girdwood <liam@nova-ioe.org>

*/

#include "julian_day.h"
#include "libnova.h"
#include <time.h>

/*! \fn double get_julian_day (struct ln_date * date)
* \param date Date required.
* \return Julian day
*
* Calculate the julian day from a calendar day. 
* Valid for positive and negative years but not for negative JD.
*/
/* Formula 7.1 on pg 61 
*/
double get_julian_day (struct ln_date * date)
{
    double JD;
    double days;
    int a,b;
    
    /* check for month = January or February */
    if (date->months < 3 )
    {
        date->years--;
	    date->months += 12;
	}
	
	a = date->years / 100;
	
	/* check for Julian or Gregorian calendar (starts Oct 4th 1582) */
	if (date->years > 1582 || (date->years == 1582 && date->months >= 10 && date->days >= 4))
	{
	    /* Gregorian calendar */    
	    b = 2 - a + (a / 4);
	}
	else
	{
	    /* Julian calendar */
	    b = 0;
	}
	
	/* add a fraction of hours, minutes and secs to days*/
	days = date->days + (double)(date->hours / 24.0) + (double)(date->minutes / 1440.0) + (double)(date->seconds /  86400.0);

	/* now get the JD */
	JD = (int)(365.25 * (date->years + 4716)) + 
	    (int)(30.6001 * (date->months + 1)) + days + b - 1524.5;
	
	return (JD);
}


/*! \fn unsigned int get_day_of_week (struct ln_date *date)
* \param date Date required
* \return Day of the week
*
* Calculate the day of the week. 
* Returns 0 = Sunday .. 6 = Saturday
*/
unsigned int get_day_of_week (struct ln_date *date)
{
    unsigned int day;
    double JD;
    
    /* get julian day */
    JD = get_julian_day (date);
    
    JD += 1.5;
    
    day = (int)JD % 7; 
    
    return (day);
}	

/*! \fn void get_date (double JD, struct ln_date * date)
* \param JD Julian day
* \param date Pointer to new calendar date.
*
* Calculate the date from the Julian day  
*/
void get_date (double JD, struct ln_date * date)
{
   int A,a,B,C,D,E;
   double F,Z;
   
   JD += 0.5;
   Z = (int) JD;
   F = JD - Z;
   
   if (Z < 2299161)
   {
       A = Z;
   }
   else
   {
       a = (int) ((Z - 1867216.25) / 36524.25);
       A = Z + 1 + a - (int)(a / 4);
   }
   
   B = A + 1524;
   C = (int) ((B - 122.1) / 365.25);
   D = (int) (365.25 * C);
   E = (int) ((B - D) / 30.6001);
   
   /* get the hms */
   date->hours = F * 24;
   F -= (double)date->hours / 24;
   date->minutes = F * 1440;
   F -= (double)date->minutes / 1440;
   date->seconds = F * 86400;
   
   /* get the day */
   date->days = B - D - (int)(30.6001 * E);
   
   /* get the month */
   if (E < 14)
   {
       date->months = E - 1;
   }
   else
   {
       date->months = E - 13;
   }
   
   /* get the year */
   if (date->months > 2)
   {
       date->years = C - 4716;
   }
   else
   {
       date->years = C - 4715;
   }    
}	
	        
/*! \fn double get_julian_from_sys ()
* \return Julian day.
*
* Calculate julian day from system time.
*/
double get_julian_from_sys ()
{
	double JD;
	struct ln_date date;
	
	/* get sys date */
	get_ln_date_from_sys (&date);
	
	JD = get_julian_day (&date);
	
	return (JD);
}

/*! \fn void get_ln_date_from_sys (struct ln_date * date)
* \param date Pointer to store date.
*
* Calculate date from system date.
*/
void get_ln_date_from_sys (struct ln_date * date)
{
	time_t curtime;
	struct tm * loctime;
		
	/* get current time */
	curtime = time (NULL);

	/* convert to local time representation */
	loctime = localtime(&curtime);
    
	/* fill in date struct */
	date->seconds = loctime->tm_sec;
	date->minutes = loctime->tm_min;
	date->hours = loctime->tm_hour;
	date->days = loctime->tm_mday;
	date->months = loctime->tm_mon + 1;
	date->years = loctime->tm_year + 1900;
}


/*! \fn double get_julian_from_timet (time_t * time)
* \param time The time_t.
* \return Julian day.
*
* Calculate julian day from time_t.
*/
double get_julian_from_timet (time_t * time)
{
	struct tm * loctime;
	struct ln_date date;
	double JD;
	
	/* convert to local time representation */
	loctime = localtime(time);
    
	/* fill in date struct */
	date.seconds = loctime->tm_sec;
	date.minutes = loctime->tm_min;
	date.hours = loctime->tm_hour;
	date.days = loctime->tm_mday;
	date.months = loctime->tm_mon + 1;
	date.years = loctime->tm_year + 1900;
	
	JD = get_julian_day (&date);
	
	return (JD);
}

/*! \fn void get_timet_from_julian (double JD, time_t * time)
* \param JD Julian day
* \param time Pointer to store time_t
*
* Calculate time_t from julian day
*/
void get_timet_from_julian (double JD, time_t * time)
{
	struct tm loctime;
	struct ln_date date;
		
	get_date (JD, &date);
	
	/* fill in date struct */
	if (date.years < 1900)
	{
		*time = 0;
		return;
	}
	loctime.tm_sec = date.seconds;
	loctime.tm_min = date.minutes;
	loctime.tm_hour = date.hours;
	loctime.tm_mday =date.days;
	loctime.tm_mon = date.months -1;
	loctime.tm_year = date.years - 1900;
	
	*time = mktime (&loctime);