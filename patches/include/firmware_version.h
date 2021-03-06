/***************************************************************************
 *                                                                         *
 *          ###########   ###########   ##########    ##########           *
 *         ############  ############  ############  ############          *
 *         ##            ##            ##   ##   ##  ##        ##          *
 *         ##            ##            ##   ##   ##  ##        ##          *
 *         ###########   ####  ######  ##   ##   ##  ##    ######          *
 *          ###########  ####  #       ##   ##   ##  ##    #    #          *
 *                   ##  ##    ######  ##   ##   ##  ##    #    #          *
 *                   ##  ##    #       ##   ##   ##  ##    #    #          *
 *         ############  ##### ######  ##   ##   ##  ##### ######          *
 *         ###########    ###########  ##   ##   ##   ##########           *
 *                                                                         *
 *            S E C U R E   M O B I L E   N E T W O R K I N G              *
 *                                                                         *
 * This file is part of NexMon.                                            *
 *                                                                         *
 * Copyright (c) 2016 NexMon Team                                          *
 *                                                                         *
 * NexMon is free software: you can redistribute it and/or modify          *
 * it under the terms of the GNU General Public License as published by    *
 * the Free Software Foundation, either version 3 of the License, or       *
 * (at your option) any later version.                                     *
 *                                                                         *
 * NexMon is distributed in the hope that it will be useful,               *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 * GNU General Public License for more details.                            *
 *                                                                         *
 * You should have received a copy of the GNU General Public License       *
 * along with NexMon. If not, see <http://www.gnu.org/licenses/>.          *
 *                                                                         *
 **************************************************************************/

#ifndef FIRMWARE_VERSION_H
#define FIRMWARE_VERSION_H

#define CHIP_VER_ALL                        0
#define CHIP_VER_BCM4339                    1
#define CHIP_VER_BCM4330                    2
#define CHIP_VER_BCM4358                    3
#define CHIP_VER_BCM43438                   4
#define CHIP_VER_BCM43430a1                 4
#define CHIP_VER_BCM4356                    5
#define CHIP_VER_BCM4335b0                  6
#define CHIP_VER_BCM43596a0                 7
#define CHIP_VER_BCM43451b1                 8

#define FW_VER_ALL                          0

// for CHIP_VER_BCM4339
#define FW_VER_6_37_32_RC23_34_40_r581243   10
#define FW_VER_6_37_32_RC23_34_43_r639704   11

// for CHIP_VER_BCM4330
#define FW_VER_5_90_195_114                 20
#define FW_VER_5_90_100_41                  21

// for CHIP_VER_BCM4358
#define FW_VER_7_112_200_17                 30
#define FW_VER_7_112_201_3                  31

// for CHIP_VER_BCM43438 (wrongly labled) BCM43430a1
#define FW_VER_7_45_41_26_r640327           40
#define FW_VER_7_45_41_46                   41

// for CHIP_VER_BCM4356
#define FW_VER_7_35_101_5_sta               50
#define FW_VER_7_35_101_5_apsta             51

// for CHIP_VER_BCM4335b0
#define FW_VER_6_30_171_1_sta               60

// for CHIP_VER_BCM43596a0
#define FW_VER_9_75_155_45_sta_c0           70

// for CHIP_VER_BCM43451b1
#define FW_VER_7_63_43_0                    80

#endif /*FIRMWARE_VERSION_H*/
