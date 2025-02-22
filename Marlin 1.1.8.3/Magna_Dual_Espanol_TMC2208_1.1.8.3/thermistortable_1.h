/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// 100k bed thermistor
const short temptable_1[][2] PROGMEM = {
  { OV(  23), 300 },//22.68
  { OV(  25), 295 },//24.25
  { OV(  27), 290 },//25.97
  { OV(  28), 285 },
  { OV(  31), 280 },
  { OV(  33), 275 },
  { OV(  35), 270 },
  { OV(  38), 265 },
  { OV(  41), 260 },
  { OV(  44), 255 },
  { OV(  48), 250 },
  { OV(  52), 245 },
  { OV(  56), 240 },
  { OV(  61), 235 },
  { OV(  66), 230 },
  { OV(  71), 225 },
  { OV(  78), 220 },
  { OV(  84), 215 },
  { OV(  92), 210 },
  { OV( 100), 205 },
  { OV( 109), 200 },
  { OV( 120), 195 },
  { OV( 131), 190 },
  { OV( 143), 185 },
  { OV( 156), 180 },
  { OV( 171), 175 },
  { OV( 187), 170 },
  { OV( 205), 165 },
  { OV( 224), 160 },
  { OV( 245), 155 },
  { OV( 268), 150 },
  { OV( 293), 145 },
  { OV( 320), 140 },
  { OV( 348), 135 },
  { OV( 379), 130 },
  { OV( 411), 125 },
  { OV( 445), 120 },
  { OV( 480), 115 },
  { OV( 516), 110 },
  { OV( 553), 105 },
  { OV( 591), 100 },
  { OV( 628),  95 },
  { OV( 665),  90 },
  { OV( 702),  85 },
  { OV( 737),  80 },
  { OV( 770),  75 },
  { OV( 801),  70 },
  { OV( 830),  65 },
  { OV( 857),  60 },
  { OV( 881),  55 },
  { OV( 903),  50 },
  { OV( 922),  45 },
  { OV( 939),  40 },
  { OV( 954),  35 },
  { OV( 966),  30 },
  { OV( 977),  25 },
  { OV( 985),  20 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};
