/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

#include <stdint.h>

// Unifont Katakana 16pt, capital 'A' heigth: 10px, width: 100%, range: 0x30a0-0x8868, glyphs: 103
extern const uint8_t Unifont_Katakana_10[3067] = {
  161,10,160,48,104,136,14,254, // unifont_t
  // 0x30a0  ゠
  160,48,6,5,5,16,5,2,252,0,0,0,252,
  // 0x30a1  ァ
  161,48,9,8,16,16,2,255,135,128,120,128,9,0,6,0,4,0,4,0,8,0,16,0,
  // 0x30a2  ア
  162,48,10,12,24,16,2,255,135,192,120,64,0,128,9,0,6,0,4,0,4,0,4,0,8,0,8,0,16,0,32,0,
  // 0x30a3  ィ
  163,48,8,10,10,16,3,255,1,2,4,28,228,4,4,4,4,4,
  // 0x30a4  イ
  164,48,9,13,26,16,2,255,0,128,0,128,1,0,2,0,12,0,52,0,194,0,2,0,2,0,2,0,2,0,2,0,2,0,
  // 0x30a5  ゥ
  165,48,8,10,10,16,3,255,16,8,15,241,65,66,2,4,8,16,
  // 0x30a6  ウ
  166,48,10,13,26,16,2,255,8,0,4,0,4,0,7,192,248,64,64,64,64,128,32,128,33,0,1,0,2,0,4,0,8,0,
  // 0x30a7  ェ
  167,48,9,7,14,16,3,0,7,0,120,0,8,0,8,0,8,0,15,0,240,128,
  // 0x30a8  エ
  168,48,11,9,18,16,2,1,1,192,126,0,8,0,4,0,4,0,4,0,4,0,15,192,240,32,
  // 0x30a9  ォ
  169,48,8,10,10,16,3,255,8,4,135,124,12,20,36,68,140,4,
  // 0x30aa  オ
  170,48,11,13,26,16,2,255,2,0,1,0,1,0,129,224,127,0,3,0,5,0,9,0,17,0,33,0,65,0,3,0,1,0,
  // 0x30ab  カ
  171,48,10,13,26,16,2,255,8,0,4,0,4,0,135,192,124,64,8,64,8,64,16,128,16,128,32,128,69,0,131,0,2,0,
  // 0x30ac  ガ
  172,48,12,14,28,16,2,255,0,32,8,144,4,80,4,64,135,192,124,64,8,64,8,64,16,128,16,128,32,128,69,0,131,0,2,0,
  // 0x30ad  キ
  173,48,11,13,26,16,2,255,16,0,8,0,9,192,14,0,116,0,4,0,5,224,14,0,242,0,2,0,1,0,1,0,1,0,
  // 0x30ae  ギ
  174,48,12,14,28,16,2,255,0,32,16,144,8,80,9,192,14,0,116,0,4,0,5,224,14,0,242,0,2,0,1,0,1,0,1,0,
  // 0x30af  ク
  175,48,9,13,26,16,3,255,32,0,19,128,28,128,17,0,33,0,34,0,66,0,132,0,4,0,8,0,16,0,32,0,64,0,
  // 0x30b0  グ
  176,48,12,14,28,16,2,255,0,32,32,144,19,80,29,64,17,0,33,0,34,0,66,0,132,0,4,0,8,0,16,0,32,0,64,0,
  // 0x30b1  ケ
  177,48,11,13,26,16,2,255,32,0,16,0,16,0,16,224,63,0,36,0,66,0,130,0,2,0,4,0,4,0,8,0,16,0,
  // 0x30b2  ゲ
  178,48,12,14,28,16,2,255,0,32,32,144,16,80,16,64,16,224,63,0,36,0,66,0,130,0,2,0,4,0,4,0,8,0,16,0,
  // 0x30b3  コ
  179,48,10,9,18,16,2,1,135,192,120,64,0,64,0,64,0,64,0,128,0,128,15,128,112,128,
  // 0x30b4  ゴ
  180,48,13,12,24,16,1,1,0,16,0,72,0,40,135,160,120,128,0,128,0,128,0,128,1,0,1,0,15,0,113,0,
  // 0x30b5  サ
  181,48,11,13,26,16,2,255,2,0,33,0,17,0,17,0,147,224,125,0,17,0,17,0,17,0,2,0,2,0,4,0,8,0,
  // 0x30b6  ザ
  182,48,12,14,28,16,2,255,0,32,2,144,33,80,17,64,17,0,147,224,125,0,17,0,17,0,17,0,2,0,2,0,4,0,8,0,
  // 0x30b7  シ
  183,48,10,11,22,16,3,0,96,0,16,0,0,0,192,0,32,64,0,128,1,0,2,0,4,0,152,0,96,0,
  // 0x30b8  ジ
  184,48,11,12,24,16,3,0,0,64,97,32,16,160,0,128,192,0,32,64,0,128,1,0,2,0,4,0,152,0,96,0,
  // 0x30b9  ス
  185,48,10,10,20,16,2,1,67,128,60,128,1,0,1,0,2,0,2,0,5,0,8,128,48,64,192,64,
  // 0x30ba  ズ
  186,48,13,12,24,16,1,1,0,16,0,72,67,168,60,160,1,0,1,0,2,0,2,0,5,0,8,128,48,64,192,64,
  // 0x30bb  セ
  187,48,11,12,24,16,2,0,32,0,16,0,16,0,17,224,22,32,152,64,112,128,17,0,16,0,16,0,8,0,7,192,
  // 0x30bc  ゼ
  188,48,12,13,26,16,2,0,0,32,32,144,16,80,16,64,17,224,22,32,152,64,112,128,17,0,16,0,16,0,8,0,7,224,
  // 0x30bd  ソ
  189,48,9,13,26,16,3,255,1,0,128,128,64,128,32,128,33,0,33,0,2,0,2,0,4,0,4,0,8,0,16,0,32,0,
  // 0x30be  ゾ
  190,48,12,14,28,16,2,255,0,32,2,144,129,80,65,64,33,0,33,0,33,0,2,0,2,0,4,0,4,0,8,0,16,0,32,0,
  // 0x30bf  タ
  191,48,10,13,26,16,2,255,8,0,4,0,7,192,8,64,8,128,20,128,35,0,65,0,2,0,4,0,8,0,48,0,192,0,
  // 0x30c0  ダ
  192,48,13,14,28,16,1,255,0,16,8,72,4,40,7,224,8,64,8,64,20,128,34,128,65,0,2,0,4,0,8,0,48,0,192,0,
  // 0x30c1  チ
  193,48,11,13,26,16,2,255,1,0,6,0,120,0,4,0,3,224,142,0,114,0,2,0,2,0,4,0,4,0,8,0,16,0,
  // 0x30c2  ヂ
  194,48,12,14,28,16,2,255,0,32,1,144,6,80,120,64,4,0,3,224,142,0,114,0,2,0,2,0,4,0,4,0,8,0,16,0,
  // 0x30c3  ッ
  195,48,8,8,8,16,3,255,34,145,81,66,2,4,8,16,
  // 0x30c4  ツ
  196,48,11,11,22,16,2,0,16,64,136,32,68,32,36,64,32,64,0,128,0,128,1,0,2,0,4,0,8,0,
  // 0x30c5  ヅ
  197,48,13,13,26,16,1,0,0,16,0,72,33,40,16,160,136,128,72,128,32,128,33,0,1,0,2,0,4,0,8,0,16,0,
  // 0x30c6  テ
  198,48,11,12,24,16,2,255,71,128,56,0,0,0,1,224,142,0,114,0,2,0,4,0,4,0,8,0,16,0,32,0,
  // 0x30c7  デ
  199,48,12,14,28,16,2,255,0,32,0,144,71,80,56,64,0,0,131,192,124,0,2,0,2,0,4,0,4,0,8,0,16,0,32,0,
  // 0x30c8  ト
  200,48,7,13,13,16,4,255,128,64,64,64,64,112,76,66,64,64,64,64,64,
  // 0x30c9  ド
  201,48,9,14,28,16,3,255,1,0,132,128,66,128,66,0,64,0,64,0,112,0,76,0,66,0,64,0,64,0,64,0,64,0,64,0,
  // 0x30ca  ナ
  202,48,11,13,26,16,2,255,4,0,2,0,2,0,131,224,126,0,2,0,2,0,2,0,4,0,4,0,8,0,16,0,32,0,
  // 0x30cb  ニ
  203,48,11,8,16,16,2,2,3,128,124,0,0,0,0,0,0,0,0,0,7,192,248,32,
  // 0x30cc  ヌ
  204,48,10,11,22,16,2,0,67,192,60,64,0,128,0,128,57,0,7,0,3,0,4,128,8,64,48,64,192,0,
  // 0x30cd  ネ
  205,48,11,13,26,16,2,255,8,0,4,0,7,128,120,128,1,0,2,0,4,0,13,0,52,192,196,32,4,0,4,0,4,0,
  // 0x30ce  ノ
  206,48,8,13,13,16,3,255,2,1,1,1,2,2,4,4,8,16,32,64,128,
  // 0x30cf  ハ
  207,48,12,8,16,16,1,1,17,0,8,128,8,64,16,32,16,32,32,16,64,16,128,16,
  // 0x30d0  バ
  208,48,13,11,22,16,1,1,0,16,0,72,0,40,17,32,8,128,8,64,16,32,16,32,32,16,64,16,128,16,
  // 0x30d1  パ
  209,48,13,12,24,16,1,1,0,48,0,72,0,72,0,48,17,0,8,128,8,64,16,32,16,32,32,16,64,16,128,16,
  // 0x30d2  ヒ
  210,48,9,11,22,16,3,0,128,0,64,0,64,0,71,0,120,0,64,0,64,0,64,0,64,0,32,0,31,128,
  // 0x30d3  ビ
  211,48,10,12,24,16,3,0,0,128,130,64,65,64,65,0,64,0,71,0,120,0,64,0,64,0,64,0,32,0,31,128,
  // 0x30d4  ピ
  212,48,10,12,24,16,3,0,1,128,130,64,66,64,65,128,64,0,71,0,120,0,64,0,64,0,64,0,32,0,31,128,
  // 0x30d5  フ
  213,48,9,11,22,16,3,0,135,128,120,128,0,128,1,0,1,0,2,0,2,0,4,0,8,0,16,0,32,0,
  // 0x30d6  ブ
  214,48,12,13,26,16,2,0,0,32,0,144,143,80,113,64,1,0,2,0,2,0,4,0,4,0,8,0,16,0,32,0,64,0,
  // 0x30d7  プ
  215,48,12,13,26,16,2,0,0,96,0,144,143,144,113,96,1,0,2,0,2,0,4,0,4,0,8,0,16,0,32,0,64,0,
  // 0x30d8  ヘ
  216,48,13,6,12,16,1,3,4,0,10,0,145,0,96,128,0,96,0,24,
  // 0x30d9  ベ
  217,48,13,9,18,16,1,3,0,64,1,32,0,160,4,128,10,0,145,0,96,128,0,96,0,24,
  // 0x30da  ペ
  218,48,13,9,18,16,1,3,0,192,1,32,1,32,4,192,10,0,145,0,96,128,0,96,0,24,
  // 0x30db  ホ
  219,48,10,13,26,16,2,255,8,0,4,0,4,0,135,192,124,0,4,0,5,0,36,128,36,64,68,64,132,0,12,0,4,0,
  // 0x30dc  ボ
  220,48,12,14,28,16,2,255,0,32,8,144,4,80,4,64,135,192,124,0,4,0,5,0,36,128,36,64,68,64,132,0,12,0,4,0,
  // 0x30dd  ポ
  221,48,12,14,28,16,2,255,0,96,8,144,4,144,4,96,135,192,124,0,4,0,5,0,36,128,36,64,68,64,132,0,12,0,4,0,
  // 0x30de  マ
  222,48,11,9,18,16,2,1,131,192,124,32,0,64,0,128,1,0,50,0,12,0,2,0,1,0,
  // 0x30df  ミ
  223,48,8,13,13,16,3,255,32,24,6,1,64,48,12,2,128,96,24,6,1,
  // 0x30e0  ム
  224,48,11,11,22,16,2,1,8,0,4,0,4,0,4,0,8,0,8,0,9,0,16,128,16,192,167,32,120,32,
  // 0x30e1  メ
  225,48,10,13,26,16,2,255,1,0,0,128,0,128,0,128,24,128,7,0,1,0,2,128,2,64,4,0,8,0,48,0,192,0,
  // 0x30e2  モ
  226,48,11,10,20,16,2,1,67,128,60,0,8,0,8,0,143,224,120,0,8,0,8,0,8,0,7,192,
  // 0x30e3  ャ
  227,48,9,9,18,16,3,255,32,0,19,128,28,128,241,0,10,0,8,0,4,0,4,0,4,0,
  // 0x30e4  ヤ
  228,48,11,12,24,16,2,0,32,0,16,0,17,224,14,32,152,64,104,128,5,0,4,0,4,0,2,0,2,0,2,0,
  // 0x30e5  ュ
  229,48,9,6,12,16,3,1,14,0,114,0,2,0,4,0,15,0,240,128,
  // 0x30e6  ユ
  230,48,11,7,14,16,2,2,71,0,57,0,1,0,2,0,2,0,7,192,248,32,
  // 0x30e7  ョ
  231,48,7,8,8,16,4,0,30,226,2,30,228,4,28,226,
  // 0x30e8  ヨ
  232,48,9,11,22,16,3,0,15,128,240,128,0,128,0,128,15,0,113,0,1,0,1,0,1,0,15,0,112,128,
  // 0x30e9  ラ
  233,48,10,12,24,16,2,255,71,0,56,0,1,192,142,64,112,64,0,64,0,128,0,128,1,0,2,0,12,0,48,0,
  // 0x30ea  リ
  234,48,7,13,13,16,4,255,4,130,66,66,66,66,66,66,4,4,8,16,32,
  // 0x30eb  ル
  235,48,11,11,22,16,2,0,4,0,34,0,18,0,18,0,18,32,18,32,18,64,34,64,34,128,67,0,130,0,
  // 0x30ec  レ
  236,48,9,12,24,16,3,0,128,0,64,0,64,0,64,0,64,0,64,0,64,128,65,0,66,0,68,0,88,0,96,0,
  // 0x30ed  ロ
  237,48,10,9,18,16,2,1,135,192,120,64,64,64,64,64,32,128,32,128,39,128,56,64,32,0,
  // 0x30ee  ヮ
  238,48,9,8,16,16,3,255,135,128,120,128,65,0,33,0,34,0,2,0,4,0,8,0,
  // 0x30ef  ワ
  239,48,10,12,24,16,2,255,135,192,120,64,64,64,32,64,32,128,32,128,1,0,1,0,2,0,4,0,8,0,16,0,
  // 0x30f0  ヰ
  240,48,11,13,26,16,2,255,4,0,2,0,2,0,7,192,122,0,34,0,18,0,23,192,250,32,2,0,2,0,2,0,2,0,
  // 0x30f1  ヱ
  241,48,11,8,16,16,2,2,7,128,120,128,9,0,6,0,4,0,4,0,7,192,248,32,
  // 0x30f2  ヲ
  242,48,9,12,24,16,3,255,15,128,240,128,0,128,1,0,15,0,113,0,2,0,2,0,4,0,8,0,48,0,192,0,
  // 0x30f3  ン
  243,48,10,10,20,16,3,0,192,0,32,64,16,64,0,128,0,128,1,0,2,0,4,0,152,0,96,0,
  // 0x30f4  ヴ
  244,48,13,14,28,16,1,255,0,16,8,72,4,40,4,32,135,192,120,64,64,64,32,128,32,128,1,0,1,0,2,0,4,0,8,0,
  // 0x30f5  ヵ
  245,48,8,9,9,16,3,255,16,8,143,113,17,17,33,70,130,
  // 0x30f6  ヶ
  246,48,8,9,9,16,3,255,64,32,35,60,68,132,8,16,32,
  // 0x30f7  ヷ
  247,48,13,15,30,16,2,255,0,16,0,72,0,32,135,192,120,64,64,64,32,64,32,128,32,128,1,0,1,0,2,0,4,0,8,0,16,0,
  // 0x30f8  ヸ
  248,48,12,14,28,16,2,255,0,32,4,16,2,64,2,32,7,192,122,0,34,0,18,0,23,192,250,32,2,0,2,0,2,0,2,0,
  // 0x30f9  ヹ
  249,48,12,11,22,16,2,2,0,32,0,16,0,64,7,160,120,128,9,0,6,0,4,0,4,0,7,192,248,32,
  // 0x30fa  ヺ
  250,48,12,15,30,16,3,255,0,32,0,16,0,64,15,160,240,128,0,128,1,0,15,0,113,0,2,0,2,0,4,0,8,0,48,0,192,0,
  // 0x30fb  ・
  251,48,4,4,4,16,5,4,96,240,240,96,
  // 0x30fc  ー
  252,48,12,2,4,16,1,5,129,240,126,0,
  // 0x30fd  ヽ
  253,48,7,5,5,16,4,4,192,48,8,4,2,
  // 0x30fe  ヾ
  254,48,8,7,7,16,4,4,2,9,196,48,8,4,2,
  // 0x30ff  ヿ
  255,48,10,13,26,16,2,255,135,128,120,64,0,64,0,64,0,64,0,64,0,64,0,64,0,64,0,64,0,64,0,64,0,64,
  // 0x4eee  仮
  238,78,15,16,32,16,0,254,8,8,8,60,11,192,18,0,18,0,50,0,51,248,82,136,146,136,18,136,18,80,18,80,18,32,20,80,20,136,25,6,
  // 0x540d  名
  13,84,13,16,32,16,0,254,2,0,2,0,7,240,8,16,20,32,98,64,2,128,1,0,6,0,31,248,232,8,8,8,8,8,8,8,15,248,8,8,
  // 0x5b9a  定
  154,91,15,16,32,16,0,254,2,0,1,0,127,254,64,2,128,4,0,0,63,248,1,0,1,0,17,0,17,248,17,0,17,0,41,0,71,254,128,0,
  // 0x7247  片
  71,114,13,16,32,16,1,254,0,128,32,128,32,128,32,128,32,128,63,248,32,0,32,0,32,0,63,192,32,64,32,64,32,64,64,64,64,64,128,64,
  // 0x793a  示
  58,121,15,15,30,16,0,254,63,248,0,0,0,0,0,0,0,0,255,254,1,0,1,0,17,16,17,8,33,4,65,2,129,2,5,0,2,0,
  // 0x7fa9  義
  169,127,15,16,32,16,0,254,8,32,4,64,127,252,1,0,63,248,1,0,255,254,2,64,60,80,8,72,255,254,8,72,14,80,120,36,8,84,25,140,
  // 0x8868  表
  104,136,15,16,32,16,0,254,1,0,1,0,127,252,1,0,1,0,63,248,1,0,1,0,255,254,5,0,8,136,24,80,40,32,201,24,10,6,12,0,
};

#endif // HAS_GRAPHICAL_TFT