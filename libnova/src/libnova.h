/* This program is free software; you can redistribute it and/or modify
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

/*! \mainpage libnova Astronomical Calculation Library
* 
* \section intro Introduction
* libnova is a general purpose, double precision, astronomical calculation library.
*
* The intended audience of libnova is C / C++ programmers, astronomers and anyone else interested in calculating positions of astronomical objects.
* libnova is the calculation engine used by the <A href="http://nova.sf.net">Nova</A> project and most importantly, is free software.
*
* \section features Features
* The current version of libnova can calculate:
*
* - Aberration
* - Nutation
* - Apparent Position
* - Dynamical Time
* - Julian Day
* - Precession
* - Proper Motion
* - Sidereal Time
* - Solar Coordinates (using VSOP87)
* - Coordinate Transformations
* - Planetary Positions (Mercury - Neptune using VSOP87)
* - Planetary Magnitude, illuminated disk and phase angle.
* - Lunar Position (using ELP82), phase angle.
*
* \section docs Documentation
* API documentation for libnova is included in the source. It can also be found in this website and an offline tarball is available <A href="http://libnova.sf.net/libnovadocs.tar.gz">here</A>.
*
* \section download Download
* The latest version of libnova is available for download <A href="http://sf.net/project/showfiles.php?group_id=57697">here.</A>
*
* \section cvs CVS
* The latest CVS version of libnova is available via CVS <A href="http://sf.net/cvs/?group_id=57697">here.</A>
*
* \section licence Licence
* libnova is released under the <A href="http://www.gnu.org">GNU</A> LGPL.
*
* \section help Help
* If you are interested in helping in the future development of libnova, then please get in touch.
* Currently, we are needing help in the folowing areas.
* - Documentation. (Not just API reference, but also astronomy info for novice users)
* - Programming (in C) astronomical solutions or algorithms.
* - Algorithms and Solutions.
* - Website.
*
* \section contact Contact
* If you would like further information, then please contact me <A href="mailto:liam@nova-ioe.org">here</A>
*
*	Liam Girdwood
*
* \section thanks Thanks
* Thanks to Jean Meeus for most of the algorithms used in this library.
* From his book "Astronomical Algorithms".
* 
* Thanks to Michelle Chapront-Touze and Jean Chapront for publishing
* the Lunar Solution ELP 2000-82B.
*
* Thanks to Messrs. Bretagnon and Francou for publishing planetary 
* solution VSOP87.
*
* Also thanks to Sourceforge for hosting this project. <A href="http://sourceforge.net"> <IMG src="http://sourceforge.net/sflogo.php?group_id=57697&amp;type=5" width="210" height="62" border="0" alt="SourceForge Logo"></A> 
*/

#ifndef LN_LIBNOVA_H
#define LN_LIBNOVA_H

#ifdef __cplusplus
extern "C" {
#endif

#include <time.h>	
	
/*!
** Date
* \struct ln_date 
* \brief Human readable Date and time used by libnova
*
* This is the Human readable (easy printf) date format used
* by libnova.
*/

struct ln_date
{
    int years; 		/*!< Years. All values are valid */
    int months;		/*!< Months. Valid values : 1 (January) - 12 (December) */
    int days; 		/*!< Days. Valid values 1 - 28,29,30,31 Depends on month.*/
    int hours; 		/*!< Hours. Valid values 0 - 23. */
    int minutes; 	/*!< Minutes. Valid values 0 - 59. */
    double seconds;	/*!< Seconds. Valid values 0 - 59.99999.... */
};

/*! \struct ln_dms
** \brief Degrees, minutes and seconds.
*
* Human readable Angle in degrees, minutes and seconds
*/

struct ln_dms
{
    int degrees;	/*!< Degrees. All values are valid */
    int minutes;	/*!< Minutes. Valid 0 - 59 */
    double seconds;	/*!< Seconds. Valid 0 - 59.9999... */
};

/*! \struct ln_hms
** \brief Hours, minutes and seconds.
*
* Human readable Angle in hours, minutes and seconds
*/

struct ln_hms
{
    int hours;		/*!< Hours. Valid 0 - 23 */
    int minutes;	/*!< Minutes. Valid 0 - 59 */
    double seconds;	/*!< Seconds. Valid 0 - 59.9999... */
};

/*! \struct lnh_equ_posn
** \brief Right Acsension and Declination.
*
* Human readable Equatorial Coordinates.
*/

struct lnh_equ_posn
{
    struct ln_hms ra;	/*!< RA. Object right ascension.*/
    struct ln_dms dec;	/*!< DEC. Object declination */
};

/*! \struct lnh_hrz_posn
** \brief Azimuth and Altitude.
*
* Human readable Horizontal Coordinates.
*/

struct lnh_hrz_posn
{
    struct ln_dms az;	/*!< AZ. Object azimuth. */
    struct ln_dms alt;	/*!< ALT. Object altitude. */
};


/*! \struct lnh_lnlat_posn
** \brief Latitude and Longitude.
* 
* Human readable Longitude and Latitude.
*/

struct lnh_lnlat_posn
{
    struct ln_dms lng; /*!< longitude. Object longitude */
    struct ln_dms lat; /*!< latitude. Object latitude */
};


/*! \struct ln_equ_posn
** \brief Equatorial Coordinates.
*
* The Right Ascension and Declination of an object.
*
* Angles are expressed in degrees.
*/

struct ln_equ_posn
{
    double ra;	/*!< RA. Object right ascension.*/
    double dec;	/*!< DEC. Object declination */
};

/*! \struct ln_hrz_posn
** \brief Horizontal Coordinates.
*
* The Azimuth and Altitude of an object.
*
* Angles are expressed in degrees.
*/

struct ln_hrz_posn
{
    double az;	/*!< AZ. Object azimuth. */
    double alt;	/*!< ALT. Object altitude. */
};


/*! \struct ln_lnlat_posn
** \brief Longitude and Latitude.
*
* The Latitude and Longitude of and object.
*
* Angles are expressed in degrees.
*/

struct ln_lnlat_posn
{
    double lng; /*!< longitude. Object longitude */
    double lat; /*!< latitude. Object latitude */
};


/*! \struct ln_helio_posn
* \brief Heliocentric position 
*
* A heliocentric position is an objects position relative to the
* centre of the Sun. 
*
* Angles are expressed in degrees.
* Radius vector is in AU.
*/
struct ln_helio_posn
{
	double L;	/*!< Heliocentric longitude */
	double B;	/*!< Heliocentric latitude */
	double R;	/*!< Heliocentric radius vector */
};

/*! \struct ln_geo_posn
* \brief Geocentric position
*
* A geocentric position is an objects position relative to the centre
* of the Earth.
*
* Position is in units of AU for planets and in units of km
* for the Moon.
*/
struct ln_geo_posn
{
	double X;	/*!< Geocentric X coordinate */
	double Y;	/*!< Geocentric Y coordinate */
	double Z;	/*!< Geocentric Z coordinate */
};

/*!
* \struct ln_orbit
* \brief Orbital elements
*
*  TODO.
* Angles are expressed in degrees.
*/
struct ln_orbit
{
	double a;	/*!< Semi major axis, in AU */
	double e;	/*!< Eccentricity */
	double i;	/*!< Inclination */
	double w;	/*!< Argument of perihelion */
	double omega;	/*!< Longitude of ascending node */
	double n;	/*!< Mean motion, in degrees/day */
};


/*! \defgroup version Libnova library version information
*/

/*! \fn const char * get_ln_version (void)
* \brief Library Version Number
* \ingroup version
*/
const char * get_ln_version (void);


/*! \defgroup calendar General Calendar Functions 
*/
 
/*! \fn double get_julian_day (struct ln_date * date)
* \ingroup calendar
* \brief Calculate the julian day from date.
*/
double get_julian_day (struct ln_date * date);

/*! \fn void get_date (double JD, struct ln_date * date)
* \ingroup calendar
* \brief Calculate the date from the julian day.
*/
void get_date (double JD, struct ln_date * date);

/*! \fn unsigned int get_day_of_week (struct ln_date * date)
* \ingroup calendar
* \brief Calculate day of the week.
*/
unsigned int get_day_of_week (struct ln_date *date);
	
/*! \fn double get_julian_from_sys ()
* \brief Calculate julian day from system time.
* \ingroup calendar
*/
double get_julian_from_sys ();


/*! \fn void get_ln_date_from_sys (struct ln_date * date)
* \brief Calculate date from system date
* \ingroup calendar
*/
void get_ln_date_from_sys (struct ln_date * date);
	
/*! \fn double get_julian_from_timet (time_t * time)
* \brief Calculate julian day from time_t
* \ingroup calendar
*/
double get_julian_from_timet (time_t * time);

/*! \fn void get_timet_from_julian (double JD, time_t * time)
* \brief Calculate time_t from julian day
* \ingroup calendar
*/
void get_timet_from_julian (double JD, time_t * time);

/*! \defgroup misc Misc Functions
*/

/*! \fn double get_dec_location(char * s)
* \ingroup misc
* \brief Obtains Latitude, Longitude, RA or Declination from a string.
*
*  If the last char is N/S doesn't accept more than 90 degrees.            
*  If it is E/W doesn't accept more than 180 degrees.                      
*  If they are hours don't accept more than 24:00                          
*                                                                          
*  Any position can be expressed as follows:                               
*  (please use a 8 bits charset if you want                                
*  to view the degrees separator char '0xba')                              
*
*  42.30.35,53                                                             
*  90�0'0,01 W                                                             
*  42�30'35.53 N                                                           
*  42�30'35.53S                                                            
*  42�30'N                                                                 
*  - 42.30.35.53                                                           
*   42:30:35.53 S                                                          
*  + 42.30.35.53                                                           
*  +42�30 35,53                                                            
*   23h36'45,0                                                             
*                                                                          
*                                                                          
*  42:30:35.53 S = -42�30'35.53"                                           
*  + 42 30.35.53 S the same previous position, the plus (+) sign is        
*  considered like an error, the last 'S' has precedence over the sign     
*                                                                          
*  90�0'0,01 N ERROR: +- 90�0'00.00" latitude limit                        
*
*/
double get_dec_location(char *s);



/*! \fn char * get_humanr_location(double location)    
*  \ingroup misc
*  \brief obtains a human readable location in the form: dd�mm'ss.ss"             
*/

char *get_humanr_location(double location);


/*!
* \defgroup dynamical Dynamical Time
*
* TODO
*/

/*! \fn double get_dynamical_time_diff (double JD)
* \ingroup dynamical
* \brief Calculate approximate dynamical time difference from julian day in seconds
*/
double get_dynamical_time_diff (double JD);

/*! \fn double get_jde (double JD)
* \brief Calculate julian ephemeris day (JDE)
* \ingroup dynamical 
*/
double get_jde (double JD);

/*! \defgroup sidereal Sidereal Time 
*
* TODO
*/

/*! \fn double get_mean_sidereal_time (double JD)
* \brief Calculate mean sidereal time from date. 
* \ingroup sidereal
*/ 
double get_mean_sidereal_time (double JD);

/*! \fn get_apparent_sidereal_time (double JD)
* \brief Calculate apparent sidereal time from date.
* \ingroup sidereal
*/
 
double get_apparent_sidereal_time (double JD);

/*! \defgroup conversion General Conversion Functions
*
* Conversion from one libnova type to another.
*/

/*! \fn double rad_to_deg (double radians)
* \brief radians to degrees
* \ingroup conversion
*/
double rad_to_deg (double radians);

/*! \fn double deg_to_rad (double radians)
* \brief degrees to radians
* \ingroup conversion
*/
double deg_to_rad (double degrees);

/*! \fn double hms_to_deg (struct ln_hms * hms)
* \brief hours to degrees 
* \ingroup conversion 
*/
double hms_to_deg (struct ln_hms * hms);

/*! \fn void deg_to_hms (double degrees, struct ln_hms * hms)
* \brief degrees to hours 
* \ingroup conversion 
*/
void deg_to_hms (double degrees, struct ln_hms * hms);

/*! \fn double hms_to_rad (struct ln_hms * hms)
* \brief hours to radians. 
* \ingroup conversion 
*/
double hms_to_rad (struct ln_hms * hms);

/*! \fn void deg_to_hms (double radians, struct ln_hms * hms)
* \brief radians to hours 
* \ingroup conversion 
*/
void rad_to_hms (double radians, struct ln_hms * hms);

/*! \fn double dms_to_deg (struct ln_dms * dms)
* \brief dms to degrees 
* \ingroup conversion 
*/
double dms_to_deg (struct ln_dms * dms);

/*! \fn void deg_to_dms (double degrees, struct ln_dms * dms)
* \brief degrees to dms
* \ingroup conversion 
*/
void deg_to_dms (double degrees, struct ln_dms * dms);

/*! \fn double dms_to_rad (struct ln_dms * dms)
* \brief dms to radians
* \ingroup conversion 
*/
double dms_to_rad (struct ln_dms * dms);

/*! \fn void rad_to_dms (double radians, struct ln_dms * dms)
* \brief radians to dms 
* \ingroup conversion
*/
void rad_to_dms (double radians, struct ln_dms * dms);

/*! \fn void hequ_to_equ (struct lnh_equ_posn * hpos, struct ln_equ_posn * pos)
* \brief human readable equatorial position to double equatorial position
* \ingroup conversion
*/
void hequ_to_equ (struct lnh_equ_posn * hpos, struct ln_equ_posn * pos);
	
/*! \fn void equ_to_hequ (struct ln_equ_posn * pos, struct lnh_equ_posn * hpos)
* \brief human double equatorial position to human readable equatorial position
* \ingroup conversion
*/
void equ_to_hequ (struct ln_equ_posn * pos, struct lnh_equ_posn * hpos);
	
/*! \fn void hhrz_to_hrz (struct lnh_hrz_posn * hpos, struct ln_hrz_posn * pos)
* \brief human readable horizontal position to double horizontal position
* \ingroup conversion
*/
void hhrz_to_hrz (struct lnh_hrz_posn * hpos, struct ln_hrz_posn * pos);
	
/*! \fn void hrz_to_hhrz (struct ln_hrz_posn * pos, struct lnh_hrz_posn * hpos)
* \brief double horizontal position to human readable horizontal position
* \ingroup conversion
*/
void hrz_to_hhrz (struct ln_hrz_posn * pos, struct lnh_hrz_posn * hpos);
	
/*! \fn void hlnlat_to_lnlat (struct lnh_lnlat_posn * hpos, struct ln_lnlat_posn * pos)
* \brief human readable long/lat position to double long/lat position
* \ingroup conversion
*/
void hlnlat_to_lnlat (struct lnh_lnlat_posn * hpos, struct ln_lnlat_posn * pos);
	
/*! \fn void lnlat_to_hlnlat (struct ln_lnlat_posn * pos, struct lnh_lnlat_posn * hpos)
* \brief double long/lat position to human readable long/lat position
* \ingroup conversion
*/
void lnlat_to_hlnlat (struct ln_lnlat_posn * pos, struct lnh_lnlat_posn * hpos);
	
/*! \fn void add_secs_hms (struct ln_hms * hms, double seconds)
* \brief add seconds to hms 
* \ingroup conversion 
*/
void add_secs_hms (struct ln_hms * hms, double seconds);

/*! \fn void add_hms (struct ln_hms * source, struct ln_hms * dest)
* \brief add hms to hms 
* \ingroup conversion 
*/
void add_hms (struct ln_hms * source, struct ln_hms * dest);

/*! \fn void range_degrees (double angle)
* \brief puts a large angle in the correct range 0 - 360 degrees 
* \ingroup conversion 
*/
double range_degrees (double angle);

/*! \fn void range_radians (double angle)
* \brief puts a large angle in the correct range 0 - 2PI radians 
* \ingroup conversion 
*/
double range_radians (double angle);
double range_radians2 (double angle);

/*! \defgroup transform Transformation of Coordinates
*
* Transformations from one coordinate system to another.
*/

/*! \fn void get_hrz_from_equ (struct ln_equ_posn * object, struct ln_lnlat_posn * observer, double JD, struct ln_hrz_posn *position);
* \brief Calculate horizontal coordinates from equatorial coordinates 
* \ingroup transform 
*/
/* Equ 12.5,12.6 pg 88 */
void get_hrz_from_equ 
	 (struct ln_equ_posn * object, 
	 struct ln_lnlat_posn * observer, 
	 double JD, struct ln_hrz_posn *position);

/*! \fn void get_equ_from_ecl (struct ln_lnlat_posn * object, double JD, struct ln_equ_posn * position);
* \brief Calculate equatorial coordinates from ecliptical coordinates 
* \ingroup transform
*/
/* Equ 12.3, 12.4 pg 89 */
void get_equ_from_ecl 
	(struct ln_lnlat_posn * object, 
	double JD,
	struct ln_equ_posn * position);

/*! \fn void get_ecl_from_equ (struct ln_equ_posn * object, double JD, struct ln_lnlat_posn * position);
* \brief Calculate ecliptical cordinates from equatorial coordinates 
* \ingroup transform
*/
/* Equ 12.1, 12.2 Pg 88 */
void get_ecl_from_equ 
	(struct ln_equ_posn * object,
	double JD,
	struct ln_lnlat_posn * position);

/*! \fn void get_equ_from_hrz (struct ln_hrz_posn *object, struct ln_lnlat_posn * observer, double JD, struct ln_equ_posn * position); 
* \brief Calculate equatorial coordinates from horizontal coordinates  
* \ingroup transform
*/
/* Pg 89 */
void get_equ_from_hrz 
	(struct ln_hrz_posn *object, 
	struct ln_lnlat_posn * observer, 
	double JD,
	struct ln_equ_posn * position); 

/*! \fn void get_geo_from_helio (struct ln_helio_posn *object, double JD, struct ln_geo_posn * position); 
* \brief Calculate geocentric coordinates from heliocentric coordinates  
* \ingroup transform
*/
/* Pg ?? */
void get_geo_from_helio 
	(struct ln_helio_posn *object,  
	double JD,
	struct ln_geo_posn * position); 



/*! \defgroup VSOP87 VSOP87 Theory
*
* Thanks to Messrs. Bretagnon and Francou for publishing planetary 
* solution VSOP87.
*/

/*! \fn void vsop87_to_fk5 (struct ln_helio_posn * position, double JD);
* \ingroup VSOP87
* \brief Transform from VSOP87 to FK5 reference system. 
*/
/* equation 31.3 Pg 207         */
/* JD Julian Day */
void vsop87_to_fk5 (struct ln_helio_posn * position, double JD);


/*! \defgroup earth Earth
*
* Functions relating to the planet Earth.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_earth_centre_dist (float height, double latitude, double * p_sin_o, double * p_cos_o);
* \ingroup earth
* \brief Calculate Earth globe centre distance.
*/
void get_earth_centre_dist (float height, double latitude, double * p_sin_o, double * p_cos_o);

/*! \defgroup nutation Nutation
*
* Nutation is a period oscillation of the Earths rotational axis around it's
* mean position.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_nutation (double JD, double * longitude, double * obliquity, double * ecliptic);
* \ingroup nutation
* \brief Calculate nutation. 
*/
void get_nutation (double JD, double * longitude, double * obliquity, double * ecliptic);

/*! \defgroup apparent Apparent position of a Star
*
* The apparent position of a star is it's position as seen from
* the centre of the Earth.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_apparent_posn (struct ln_equ_posn * mean_position, struct ln_equ_posn * proper_motion, double JD, struct ln_equ_posn * position);
* \brief Calculate the apparent position of a star.  
* \ingroup apparent
*/
void get_apparent_posn 
	(struct ln_equ_posn * mean_position, 
	struct ln_equ_posn * proper_motion, 
	double JD,
	struct ln_equ_posn * position);


/*! \defgroup precession Precession.
*
* Precession is the changing direction of the Earth's rotational axis over time and
* is due to the gravitational influence of the Sun and the Moon.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_equ_prec (struct ln_equ_posn * mean_position, double JD, struct ln_equ_posn * position);
* \brief Calculate the effects of precession on equatorial coordinates.
* \ingroup precession
*/

/* Equ 20.2, 20.3, 20.4 pg 126 */
void get_equ_prec 
	(struct ln_equ_posn * mean_position, 
	double JD,
	struct ln_equ_posn * position);

/*! \fn void get_ecl_prec (struct ln_lnlat_posn * mean_position, double JD, struct ln_lnlat_posn * position); 
* \brief Calculate the effects of precession on ecliptical coordinates.
* \ingroup precession
*/
/* Equ 20.5, 20.6 pg 128 */
void get_ecl_prec 
	(struct ln_lnlat_posn * mean_position, 
	double JD,
	struct ln_lnlat_posn * position); 


/*! \defgroup motion Proper Motion.
* Proper motion is the motion in space of a star between 2 epochs. It has components
* in right ascension and in declination.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_equ_pm (struct ln_equ_posn * mean_position, struct ln_equ_posn * proper_motion, double JD, struct ln_equ_posn * position);
* \brief Calculate the proper motion of a star.
* \ingroup motion
*/
/* Equ 20.2, 20.3, 20.4 pg 126 */
void get_equ_pm 
	(struct ln_equ_posn * mean_position, 
	struct ln_equ_posn * proper_motion, 
	double JD,
	struct ln_equ_posn * position);


/*! \defgroup aberration Aberration
*
* Aberration: need a description.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_equ_aber (struct ln_equ_posn * mean_position, double JD, struct ln_equ_posn * position);
* \brief Calculate equatorial coordinates with the effects of aberration.
* \ingroup aberration
*/
/* Equ 22.1, 22.3, 22.4 and Ron-Vondrak expression */
void get_equ_aber 
	(struct ln_equ_posn * mean_position, 
	double JD,
	struct ln_equ_posn * position);


/*! \fn void get_ecl_aber (struct ln_lnlat_posn * mean_position, double JD, struct ln_lnlat_posn * position); 
* \brief Calculate ecliptical coordinates with the effects of aberration.
* \ingroup aberration
*/
/* Equ 22.1, 22.2 pg 139 */
void get_ecl_aber 
	(struct ln_lnlat_posn * mean_position, 
	double JD,
	struct ln_lnlat_posn * position); 


/*! \defgroup solar Solar.
*
* Calculate solar ecliptical/equatorial coordinates for a given julian date.  
* Accuracy 0.01 arc second error - uses VSOP87 solution. 
*
* All angles are expressed in degrees.
*/

/*! \fn void get_geom_solar_coords (double JD, struct ln_helio_posn * position);
* \brief Calculate solar geometric coordinates. 
* \ingroup solar 
*/
void get_geom_solar_coords 
	(double JD,
	struct ln_helio_posn * position);

/*! \fn void get_equ_solar_coords (double JD, struct ln_equ_posn * position);
* \brief Calculate apparent equatorial coordinates.
* \ingroup solar
*/ 
void get_equ_solar_coords 
	(double JD,
	struct ln_equ_posn * position);

/*! \fn void get_ecl_solar_coords (double JD, struct ln_lnlat_posn * position);
* \brief Calculate apparent ecliptical coordinates.
* \ingroup solar
*/ 
void get_ecl_solar_coords 
	(double JD,
	struct ln_lnlat_posn * position);

/*! \fn void get_geo_solar_coords (double JD, struct ln_geo_posn * position)
* \brief Calculate geocentric coordinates (rectangular)
* \ingroup solar
*/
void get_geo_solar_coords (double JD, struct ln_geo_posn * position);
	

/*! \defgroup mercury Mercury
*
* Functions relating to the planet Mercury.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_mercury_helio_coords (double JD, struct ln_helio_posn * position);
* \brief Calculate Mercury's heliocentric coordinates
* \ingroup mercury
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_mercury_helio_coords 
	(double JD,
	struct ln_helio_posn * position);


/*! \fn void get_mercury_equ_coords (double JD, struct ln_equ_posn * position);
* \brief Calculate Mercury's equatorial coordinates
* \ingroup mercury
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_mercury_equ_coords 
	(double JD,
	struct ln_equ_posn * position);

/*! \fn double get_mercury_earth_dist (double JD);
* \brief Calculate the distance between Mercury and the Earth.
* \ingroup mercury
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_mercury_earth_dist (double JD);
	
/*! \fn double get_mercury_sun_dist (double JD);
* \brief Calculate the distance between Mercury and the Sun in AU
* \ingroup mercury
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_mercury_sun_dist (double JD);
	
/*! \fn double get_mercury_magnitude (double JD);
* \brief Calculate the visible magnitude of Mercury
* \ingroup mercury
* \return Visible magnitude of Mercury
*/ 
/* Chapter ?? */
double get_mercury_magnitude (double JD);	
	
/*! \fn double get_mercury_disk (double JD);
* \brief Calculate the illuminated fraction of Mercury's disk
* \ingroup mercury
* \return Illuminated fraction of mercurys disk
*/ 
/* Chapter 41 */
double get_mercury_disk (double JD);

/*! \fn double get_mercury_phase (double JD);
* \brief Calculate the phase angle of Mercury (Sun - Mercury - Earth)
* \ingroup mercury
* \return Phase angle of Mercury (degrees)
*/ 
/* Chapter 41 */
double get_mercury_phase (double JD);

/*! \defgroup venus Venus
*
* Functions relating to the planet Venus.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_venus_helio_coords (double JD, struct ln_helio_posn * position);
* \brief Calvulate Venus heliocentric coordinates 
* \ingroup venus
*/
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_venus_helio_coords 
	(double JD,
	struct ln_helio_posn * position);


/*! \fn void get_venus_equ_coords (double JD, struct ln_equ_posn * position);
* \brief Calculate Venus equatorial coordinates
* \ingroup venus
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_venus_equ_coords 
	(double JD,
	struct ln_equ_posn * position);

/*! \fn double get_venus_earth_dist (double JD);
* \brief Calculate the distance between Venus and the Earth.
* \ingroup venus
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_venus_earth_dist (double JD);
	
/*! \fn double get_venus_sun_dist (double JD);
* \brief Calculate the distance between Venus and the Sun.
* \ingroup venus
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_venus_sun_dist (double JD);
	
/*! \fn double get_venus_magnitude (double JD);
* \brief Calculate the visible magnitude of Venus
* \ingroup venus
* \return Visible magnitude of Venus
*/ 
/* Chapter ?? */
double get_venus_magnitude (double JD);

/*! \fn double get_venus_disk (double JD);
* \brief Calculate the illuminated fraction of Venus disk
* \ingroup venus
* \return Illuminated fraction of Venus disk
*/ 
/* Chapter 41 */
double get_venus_disk (double JD);

/*! \fn double get_venus_phase (double JD);
* \brief Calculate the phase angle of Venus.
* \ingroup venus
* \return Phase angle of Venus (degrees)
*/ 
/* Chapter 41 */
double get_venus_phase (double JD);

/*
** Earth
*/

/*! \fn void get_earth_helio_coords (double JD, struct ln_helio_posn * position);
* \brief Calculate Earth's heliocentric coordinates
* \ingroup earth
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_earth_helio_coords 
	(double JD,
	struct ln_helio_posn * position);

/*! \fn void get_earth_sun_dist (double JD);
* \brief Calculate the distance between Earth and the Sun.
* \ingroup earth
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_earth_sun_dist (double JD);

/*! \defgroup mars Mars
*
* Functions relating to the planet Mars.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_mars_helio_coords (double JD, struct ln_helio_posn * position);
* \brief Calculate Mars heliocentric coordinates
* \ingroup mars
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_mars_helio_coords 
	(double JD,
	struct ln_helio_posn * position);

/*! \fn void get_mars_equ_coords (double JD, struct ln_equ_posn * position);
* \brief Calculate Mars equatorial coordinates
* \ingroup mars
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_mars_equ_coords 
	(double JD,
	struct ln_equ_posn * position);

/*! \fn double get_mars_earth_dist (double JD);
* \brief Calculate the distance between Mars and the Earth.
* \ingroup mars
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_mars_earth_dist (double JD);
	
/*! \fn double get_mars_sun_dist (double JD);
* \brief Calculate the distance between Mars and the Sun.
* \ingroup mars
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_mars_sun_dist (double JD);
	
/*! \fn double get_mars_magnitude (double JD);
* \brief Calculate the visible magnitude of Mars
* \ingroup mars
* \return Visible magnitude of Mars
*/ 
/* Chapter ?? */
double get_mars_magnitude (double JD);

/*! \fn double get_mars_disk (double JD);
* \brief Calculate the illuminated fraction of Mars disk
* \ingroup mars
* \return Illuminated fraction of Mars disk
*/ 
/* Chapter 41 */
double get_mars_disk (double JD);

/*! \fn double get_mars_phase (double JD);
* \brief Calculate the phase angle of Mars.
* \ingroup mars
* \return Phase angle of Mars (degrees)
*/ 
/* Chapter 41 */
double get_mars_phase (double JD);

/*! \defgroup jupiter Jupiter
*
* Functions relating to the planet Jupiter.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_jupiter_helio_coords (double JD, struct ln_helio_posn * position);
* \brief Calculate Jupiter's heliocentric coordinates
* \ingroup jupiter
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_jupiter_helio_coords 
	(double JD, struct ln_helio_posn * position);

/*! \fn void get_jupiter_equ_coords (double JD, struct ln_equ_posn * position);
* \brief Calculate Jupiter's equatorial coordinates.
* \ingroup jupiter
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_jupiter_equ_coords 
	(double JD,
	struct ln_equ_posn * position);

/*! \fn double get_jupiter_earth_dist (double JD);
* \brief Calculate the distance between Jupiter and the Earth.
* \ingroup jupiter
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_jupiter_earth_dist (double JD);
	
/*! \fn double get_jupiter_sun_dist (double JD);
* \brief Calculate the distance between Jupiter and the Sun.
* \ingroup jupiter
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_jupiter_sun_dist (double JD);
	
/*! \fn double get_jupiter_magnitude (double JD);
* \brief Calculate the visible magnitude of Jupiter
* \ingroup jupiter
* \return Visible magnitude of Jupiter
*/ 
/* Chapter ?? */
double get_jupiter_magnitude (double JD);

/*! \fn double get_jupiter_disk (double JD);
* \brief Calculate the illuminated fraction of Jupiter's disk
* \ingroup jupiter
* \return Illuminated fraction of Jupiter's disk
*/ 
/* Chapter 41 */
double get_jupiter_disk (double JD);

/*! \fn double get_jupiter_phase (double JD);
* \brief Calculate the phase angle of Jupiter.
* \ingroup jupiter
* \return Phase angle of Jupiter (degrees)
*/ 
/* Chapter 41 */
double get_jupiter_phase (double JD);

/*! \defgroup saturn Saturn
*
* Functions relating to the planet Saturn.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_saturn_helio_coords (double JD, struct ln_helio_posn * position);
* \brief Calculate Saturn's heliocentric coordinates.
* \ingroup saturn
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_saturn_helio_coords 
	(double JD, struct ln_helio_posn * position);


/*! \fn void get_saturn_equ_coords (double JD, struct ln_equ_posn * position);
* \brief Calculate Saturn's equatorial coordinates.
* \ingroup saturn
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_saturn_equ_coords 
	(double JD,
	struct ln_equ_posn * position);

/*! \fn double get_saturn_earth_dist (double JD);
* \brief Calculate the distance between Saturn and the Earth.
* \ingroup saturn
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_saturn_earth_dist (double JD);
	
/*! \fn double get_saturn_sun_dist (double JD);
* \brief Calculate the distance between Saturn and the Sun.
* \ingroup saturn
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_saturn_sun_dist (double JD);
	
/*! \fn double get_saturn_magnitude (double JD);
* \brief Calculate the visible magnitude of Saturn
* \ingroup saturn
* \return Visible magnitude of Saturn
*/ 
/* Chapter ?? */
double get_saturn_magnitude (double JD);

/*! \fn double get_saturn_disk (double JD);
* \brief Calculate the illuminated fraction of Saturn's disk
* \ingroup saturn
* \return Illuminated fraction of Saturn's disk
*/ 
/* Chapter 41 */
double get_saturn_disk (double JD);

/*! \fn double get_saturn_phase (double JD);
* \brief Calculate the phase angle of Saturn.
* \ingroup saturn
* \return Phase angle of Saturn (degrees)
*/ 
/* Chapter 41 */
double get_saturn_phase (double JD);

/*! \defgroup uranus Uranus
*
* Functions relating to the planet Uranus.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_uranus_helio_coords (double JD, struct ln_helio_posn * position);
* \brief Calculate Uranus heliocentric coordinates
* \ingroup uranus
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_uranus_helio_coords 
	(double JD, struct ln_helio_posn * position);

/*! \fn void get_uranus_equ_coords (double JD, struct ln_equ_posn * position);
* \brief Calculate Uranus equatorial coordinates.
* \ingroup uranus
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_uranus_equ_coords 
	(double JD,
	struct ln_equ_posn * position);

/*! \fn double get_uranus_earth_dist (double JD);
* \brief Calculate the distance between Uranus and the Earth.
* \ingroup uranus
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_uranus_earth_dist (double JD);
	
/*! \fn double get_uranus_sun_dist (double JD);
* \brief Calculate the distance between Uranus and the Sun.
* \ingroup uranus
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_uranus_sun_dist (double JD);
	
/*! \fn double get_uranus_magnitude (double JD);
* \brief Calculate the visible magnitude of Uranus
* \ingroup uranus
* \return Visible magnitude of Uranus
*/ 
/* Chapter ?? */
double get_uranus_magnitude (double JD);

/*! \fn double get_uranus_disk (double JD);
* \brief Calculate the illuminated fraction of Uranus's disk
* \ingroup uranus
* \return Illuminated fraction of Uranus disk
*/ 
/* Chapter 41 */
double get_uranus_disk (double JD);

/*! \fn double get_uranus_phase (double JD);
* \brief Calculate the phase angle of Uranus.
* \ingroup uranus
* \return Phase angle of Uranus (degrees)
*/ 
/* Chapter 41 */
double get_uranus_phase (double JD);

/*! \defgroup neptune Neptune
*
* Functions relating to the planet Neptune.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_neptune_helio_coords (double JD, struct ln_helio_posn * position);
* \brief Calculate Neptune's heliocentric coordinates.
* \ingroup neptune
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_neptune_helio_coords 
	(double JD, struct ln_helio_posn * position);


/*! \fn void get_neptune_equ_coords (double JD, struct ln_equ_posn * position);
* \brief Calculate Neptune's equatorial coordinates.
* \ingroup neptune
*/ 
/* Chapter 31 Pg 206-207 Equ 31.1 31.2 , 31.3 using VSOP 87 */
void get_neptune_equ_coords 
	(double JD,
	struct ln_equ_posn * position);
		
/*! \fn double get_neptune_earth_dist (double JD);
* \brief Calculate the distance between Neptune and the Earth.
* \ingroup neptune
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_neptune_earth_dist (double JD);
	
/*! \fn double get_neptune_sun_dist (double JD);
* \brief Calculate the distance between Neptune and the Sun.
* \ingroup neptune
* \return Distance in AU
*/ 
/* Chapter ?? */
double get_neptune_sun_dist (double JD);
	
/*! \fn double get_neptune_magnitude (double JD);
* \brief Calculate the visible magnitude of Neptune.
* \ingroup neptune
* \return Visisble magnitude of Neptune.
*/ 
/* Chapter ?? */
double get_neptune_magnitude (double JD);

/*! \fn double get_neptune_disk (double JD);
* \brief Calculate the illuminated fraction of Neptune's disk.
* \ingroup neptune
* \return Illuminated fraction of Neptune's disk.
*/ 
/* Chapter 41 */
double get_neptune_disk (double JD);

/*! \fn double get_neptune_phase (double JD);
* \brief Calculate the phase angle of Neptune.
* \ingroup neptune
* \return Phase angle of Neptune (degrees)
*/ 
/* Chapter 41 */
double get_neptune_phase (double JD);

/*! \defgroup pluto Pluto
*
* Functions relating to the planet Pluto.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_pluto_helio_coords (double JD, struct ln_helio_posn * position);
* \brief Calculate Pluto's heliocentric coordinates.
* \ingroup pluto
*/ 
/* Chapter 37 Pg 263  */
void get_pluto_helio_coords 
	(double JD, struct ln_helio_posn * position);

/*! \fn void get_pluto_equ_coords (double JD, struct ln_equ_posn * position);
* \brief Calculate Pluto's equatorial coordinates.
* \ingroup pluto
*/ 
/* Chapter 37 */
void get_pluto_equ_coords 
	(double JD,
	struct ln_equ_posn * position);
		
/*! \fn double get_pluto_earth_dist (double JD);
* \brief Calculate the distance between Pluto and the Earth.
* \ingroup pluto
* \return distance in AU
*/ 
/* Chapter 37 */
double get_pluto_earth_dist (double JD);
	
/*! \fn double get_pluto_sun_dist (double JD);
* \brief Calculate the distance between Pluto and the Sun.
* \ingroup pluto
* \return Distance in AU
*/ 
/* Chapter 37 */
double get_pluto_sun_dist (double JD);
	
/*! \fn double get_pluto_magnitude (double JD);
* \brief Calculate the visible magnitude of Pluto
* \ingroup pluto
* \return Visible magnitude of Pluto.
*/ 
/* Chapter 41 */
double get_pluto_magnitude (double JD);

/*! \fn double get_pluto_disk (double JD);
* \brief Calculate the illuminated fraction of Pluto's disk
* \ingroup pluto
* \return Illuminated fraction of Pluto's disk
*/ 
/* Chapter 41 */
double get_pluto_disk (double JD);

/*! \fn double get_pluto_phase (double JD);
* \brief Calculate the phase angle of Pluto. 
* \ingroup pluto
* \return Phase angle of Pluto (degrees).
*/ 
/* Chapter 41 */
double get_pluto_phase (double JD);

/*! \defgroup lunar Lunar
*
* Functions relating to the Moon.
*
* All angles are expressed in degrees.
*/

/*! \fn void get_lunar_geo_posn (double JD, struct ln_geo_posn * moon, double precision);
* \brief Calculate the rectangular geocentric lunar cordinates.
* \ingroup lunar
*/ 
/* ELP 2000-82B theory */
void get_lunar_geo_posn (double JD, struct ln_geo_posn * moon, double precision);

/*! \fn void get_lunar_equ_coords (double JD, struct ln_equ_posn * position, double precision);
* \brief Calculate lunar equatorial coordinates.
* \ingroup lunar
*/ 
void get_lunar_equ_coords 
	(double JD,
	struct ln_equ_posn * position, double precision);

/*! \fn void get_lunar_ecl_coords (double JD, struct ln_lnlat_posn * position, double precision);
* \brief Calculate lunar ecliptical coordinates.
* \ingroup lunar
*/ 
void get_lunar_ecl_coords 
	(double JD,
	struct ln_lnlat_posn * position, double precision);

/*! \fn double get_lunar_phase (double JD);
* \brief Calculate the phase angle of the Moon.
* \ingroup lunar
*/ 
double get_lunar_phase (double JD);

/*! \fn double get_lunar_disk (double JD);
* \brief Calculate the illuminated fraction of the Moons disk
* \ingroup lunar
*/ 
double get_lunar_disk (double JD);
	
/*! \fn double get_lunar_earth_dist (double JD);
* \brief Calculate the distance between the Earth and the Moon.
* \ingroup lunar
*/ 
double get_lunar_earth_dist (double JD);	
	
/*! \fn double get_lunar_bright_limb (double JD);
* \brief Calculate the position angle of the Moon's bright limb.
* \ingroup lunar
*/ 
double get_lunar_bright_limb (double JD);
	
#ifdef __cplusplus
};
#endif


#endif