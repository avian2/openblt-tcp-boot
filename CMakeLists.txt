#****************************************************************************************
# \file         CMakeLists.txt
# \brief        CMake descriptor file for openblt-tcp-boot command line demonstration program.
# \ingroup      openblt-tcp-boot
# \internal
#----------------------------------------------------------------------------------------
#                          C O P Y R I G H T
#----------------------------------------------------------------------------------------
#   Copyright (c) 2014  by Feaser    http://www.feaser.com    All rights reserved
#
#----------------------------------------------------------------------------------------
#                            L I C E N S E
#----------------------------------------------------------------------------------------
# This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
# modify it under the terms of the GNU General Public License as published by the Free
# Software Foundation, either version 3 of the License, or (at your option) any later
# version.
#
# OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
# PURPOSE. See the GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License along with OpenBLT.
# If not, see <http://www.gnu.org/licenses/>.
#
# A special exception to the GPL is included to allow you to distribute a combined work 
# that includes OpenBLT without being obliged to provide the source code for any 
# proprietary components. The exception text is included at the bottom of the license
# file <license.html>.
# 
# \endinternal
#****************************************************************************************

# Specify the version being used aswell as the language
cmake_minimum_required(VERSION 2.8)

# Specify the project name
project(openblt-tcp-boot)

# Set the port directory, which is platform specific
IF(UNIX)
  set(PROJECT_PORT_DIR ${PROJECT_SOURCE_DIR}/port/linux)
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DPLATFORM_LINUX")
ENDIF(UNIX)

# Build debug version by default
set(CMAKE_BUILD_TYPE "Debug")

# Set include directories
include_directories("${PROJECT_SOURCE_DIR}" "${PROJECT_PORT_DIR}" "${PROJECT_SOURCE_DIR}/port")

# Get header files
file(GLOB_RECURSE INCS "*.h")

# Add sources
add_executable(
  openblt-tcp-boot 
  main.c 
  xcpmaster.c 
  srecord.c 
  ${PROJECT_PORT_DIR}/xcptransport.c
  ${PROJECT_PORT_DIR}/timeutil.c
  ${INCS}
)

install(TARGETS openblt-tcp-boot RUNTIME DESTINATION bin)

#*********************************** end of CMakeLists.txt ******************************
