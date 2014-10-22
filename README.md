openblt-tcp-boot
================

openblt-tcp-boot is a command-line utility for Linux that allows reprogramming
a microcontroller over a TCP/IP connection using the OpenBLT bootloader.

http://feaser.com/openblt/doku.php


Compiling
---------

    $ mkdir build
    $ cd build
    $ cmake ..
    $ make


Usage
-----

To reprogram a device listening on IP address 192.168.1.100 and TCP port
2101, use the following command:

    $ openblt-tcp-boot -d192.168.1.100 -p2101 firmware.srec


License
-------

openblt-tcp-boot is based on SerialBoot, which is part of the OpenBLT
distribution. Original OpenBLT code has been modified by Tomaz Solc.


Copyright (c) 2014  by Feaser   http://www.feaser.com    All rights reserved
Copyright (c) 2014  by IJS      tomaz.solc@ijs.si

This program is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option)
any later version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
more details.

You should have received a copy of the GNU General Public License along
with this program.  If not, see <http://www.gnu.org/licenses/>.


A special exception to the GPL is included to allow you to distribute a
combined work that includes OpenBLT without being obliged to provide the
source code for any proprietary components. The exception text is included
at the bottom of the license file "license.html"
