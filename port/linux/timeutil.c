/************************************************************************************//**
* \file         port\linux\timeutil.c
* \brief        Time utility source file.
* \ingroup      SerialBoot
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2014  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published by the Free
* Software Foundation, either version 3 of the License, or (at your option) any later
* version.
*
* OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
* PURPOSE. See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with OpenBLT.
* If not, see <http://www.gnu.org/licenses/>.
*
* A special exception to the GPL is included to allow you to distribute a combined work
* that includes OpenBLT without being obliged to provide the source code for any
* proprietary components. The exception text is included at the bottom of the license
* file <license.html>.
*
* \endinternal
****************************************************************************************/

/****************************************************************************************
* Include files
****************************************************************************************/
#include <assert.h>                                   /* assertion module              */
#include <sb_types.h>                                 /* C types                       */
#include <unistd.h>                                   /* UNIX standard functions       */
#include <fcntl.h>                                    /* file control definitions      */
#include <time.h>                                     /* time definitions              */
#include <sys/time.h>


/************************************************************************************//**
** \brief     Get the system time in milliseconds.
** \return    Time in milliseconds.
**
****************************************************************************************/
sb_uint32 TimeUtilGetSystemTimeMs(void)
{
 struct timeval tv;

 if (gettimeofday(&tv, SB_NULL) != 0)
 {
   return 0;
 }

 return (sb_uint32)((tv.tv_sec * 1000ul) + (tv.tv_usec / 1000ul));
} /*** end of XcpTransportClose ***/


/************************************************************************************//**
** \brief     Performs a delay of the specified amount of milliseconds.
** \param     delay Delay time in milliseconds.
** \return    none.
**
****************************************************************************************/
void TimeUtilDelayMs(sb_uint16 delay)
{
  usleep(1000 * delay);
} /*** end of TimeUtilDelayMs **/


/*********************************** end of xcptransport.c *****************************/
