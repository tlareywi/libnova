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

Copyright 2000 Liam Girdwood
 
*/

#ifndef _LN_SOLAR_H
#define _LN_SOLAR_H

#include <libnova/ln_types.h>

#ifdef __cplusplus
extern "C" {
#endif

/*! \defgroup solar Solar.
*
* Calculate solar ecliptical/equatorial coordinates for a given julian date.  
* Accuracy 0.01 arc second error - uses VSOP87 solution. 
*
* All angles are expressed in degrees.
*/

/*! \fn double ln_get_solar_rst (double JD, struct ln_lnlat_posn * observer, struct ln_rst_time * rst);
* \brief Calculate the time of rise, set and transit for the Sun.
* \ingroup solar
*/
int ln_get_solar_rst_horizont (double JD, struct ln_lnlat_posn * observer, double horizont, struct ln_rst_time * rst);

/*! \fn double ln_get_solar_rst (double JD, struct ln_lnlat_posn * observer, struct ln_rst_time * rst);
* \brief Calculate the time of rise, set and transit for the Sun.
* \ingroup solar
*/
int ln_get_solar_rst (double JD, struct ln_lnlat_posn * observer, struct ln_rst_time * rst);
	
/*! \fn void ln_get_geom_solar_coords (double JD, struct ln_helio_posn * position);
* \brief Calculate solar geometric coordinates. 
* \ingroup solar 
*/
void ln_get_geom_solar_coords (double JD, struct ln_helio_posn * position);

/*! \fn void get_ln_equ_solar_coords (double JD, struct ln_equ_posn * position);
* \brief Calculate apparent equatorial coordinates.
* \ingroup solar
*/ 
void ln_get_equ_solar_coords (double JD, struct ln_equ_posn * position);

/*! \fn void ln_get_ecl_solar_coords (double JD, struct ln_lnlat_posn * position);
* \brief Calculate apparent ecliptical coordinates.
* \ingroup solar
*/ 
void ln_get_ecl_solar_coords (double JD, struct ln_lnlat_posn * position);

/*! \fn void ln_get_geo_solar_coords (double JD, struct ln_rect_posn * position)
* \brief Calculate geocentric coordinates (rectangular)
* \ingroup solar
*/
void ln_get_geo_solar_coords (double JD, struct ln_rect_posn * position);
	
/*! \fn double ln_get_solar_sdiam (double JD)
* \brief Calcaluate the semidiameter of the Sun in arc seconds.
* \ingroup solar
*/
double ln_get_solar_sdiam (double JD);

#ifdef __cplusplus
};
#endif

#endif