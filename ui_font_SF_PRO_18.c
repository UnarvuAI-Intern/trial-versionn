/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font /home/dhaanesvar/SquareLine/assets/SF-Pro-Display-Roman-Family/SF-Pro-Display-Bold.otf -o /home/dhaanesvar/SquareLine/assets/SF-Pro-Display-Roman-Family/ui_font_SF_PRO_18.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_SF_PRO_18
#define UI_FONT_SF_PRO_18 1
#endif

#if UI_FONT_SF_PRO_18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xe3, 0xfe,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xbd, 0x80,

    /* U+0023 "#" */
    0xc, 0xc1, 0x8c, 0x18, 0xc7, 0xfe, 0x7f, 0xe1,
    0x98, 0x11, 0x83, 0x18, 0xff, 0xef, 0xfc, 0x33,
    0x3, 0x30, 0x63, 0x0,

    /* U+0024 "$" */
    0x8, 0xf, 0xc7, 0xfb, 0xa7, 0xe8, 0x3e, 0xf,
    0xe1, 0xfe, 0x1f, 0xc2, 0xf0, 0x9f, 0xa7, 0xff,
    0x8f, 0xc0, 0x80, 0x20,

    /* U+0025 "%" */
    0x78, 0x31, 0xf8, 0x63, 0x31, 0x86, 0x62, 0xc,
    0xcc, 0x1f, 0xb0, 0x1e, 0x4f, 0x1, 0xbf, 0x6,
    0x66, 0x8, 0xcc, 0x31, 0x98, 0xc3, 0xf1, 0x83,
    0xc0,

    /* U+0026 "&" */
    0x3e, 0x7, 0xf0, 0x63, 0x6, 0x30, 0x77, 0x3,
    0xe0, 0x3c, 0x67, 0xe6, 0xe7, 0xee, 0x3c, 0xe3,
    0xc7, 0xfe, 0x3e, 0x70,

    /* U+0027 "'" */
    0xff, 0xc0,

    /* U+0028 "(" */
    0x39, 0x9c, 0xee, 0x73, 0x9c, 0xe7, 0x39, 0xc7,
    0x38, 0xc7,

    /* U+0029 ")" */
    0xc3, 0x1c, 0xe3, 0x9c, 0xe7, 0x39, 0xce, 0x77,
    0x39, 0x98,

    /* U+002A "*" */
    0x33, 0xff, 0xff, 0xfc, 0xc0,

    /* U+002B "+" */
    0xc, 0x3, 0x0, 0xc3, 0xff, 0xff, 0xc3, 0x0,
    0xc0, 0x30, 0xc, 0x0,

    /* U+002C "," */
    0x6d, 0xbc,

    /* U+002D "-" */
    0xff, 0xf0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x18, 0xc6, 0x73, 0x98, 0xc6, 0x73, 0x98, 0xc6,
    0x33, 0x98,

    /* U+0030 "0" */
    0x1e, 0xf, 0xc7, 0x3b, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xf8, 0x77, 0x38, 0xfc, 0x1e,
    0x0,

    /* U+0031 "1" */
    0x1e, 0x7f, 0xfe, 0x78, 0xe1, 0xc3, 0x87, 0xe,
    0x1c, 0x38, 0x70, 0xe0,

    /* U+0032 "2" */
    0x3e, 0x3f, 0xbc, 0xfc, 0x70, 0x38, 0x3c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1f, 0xff, 0xf8,

    /* U+0033 "3" */
    0x1f, 0x1f, 0xe6, 0x1c, 0x7, 0x3, 0xc7, 0xc1,
    0xf8, 0xf, 0x1, 0xf8, 0x7e, 0x3d, 0xfe, 0x3f,
    0x0,

    /* U+0034 "4" */
    0x7, 0xc0, 0xf8, 0x3f, 0xe, 0xe1, 0x9c, 0x73,
    0x9c, 0x73, 0xe, 0xff, 0xff, 0xfc, 0x7, 0x0,
    0xe0, 0x1c,

    /* U+0035 "5" */
    0x7f, 0x9f, 0xee, 0x3, 0x80, 0xef, 0x3f, 0xee,
    0x3c, 0x7, 0x1, 0xf0, 0x7e, 0x39, 0xfe, 0x3e,
    0x0,

    /* U+0036 "6" */
    0x1f, 0xf, 0xe7, 0x3f, 0x80, 0xef, 0x3f, 0xef,
    0x3f, 0x87, 0xe1, 0xf8, 0x77, 0x38, 0xfe, 0x1e,
    0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xc0, 0xe0, 0x60, 0x70, 0x30, 0x38,
    0x18, 0x1c, 0xc, 0xe, 0x6, 0x7, 0x0,

    /* U+0038 "8" */
    0x3f, 0x1f, 0xee, 0x1f, 0x87, 0xe1, 0xcf, 0xc7,
    0xf3, 0xcf, 0xe1, 0xf8, 0x7f, 0x3d, 0xfe, 0x3f,
    0x0,

    /* U+0039 "9" */
    0x3e, 0x1f, 0xcf, 0x3b, 0x87, 0xe1, 0xfc, 0xf7,
    0xfc, 0xf7, 0x1, 0xf8, 0x77, 0x39, 0xfc, 0x3e,
    0x0,

    /* U+003A ":" */
    0xff, 0x80, 0x3f, 0xe0,

    /* U+003B ";" */
    0xff, 0x80, 0x7, 0xdb, 0x60,

    /* U+003C "<" */
    0x0, 0xc1, 0xf3, 0xfb, 0xf0, 0xe0, 0x3e, 0x3,
    0xf0, 0x3f, 0x1, 0xc0,

    /* U+003D "=" */
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x7, 0xff, 0xfe,

    /* U+003E ">" */
    0xc0, 0x3c, 0x7, 0xe0, 0x3f, 0x1, 0xc1, 0xf3,
    0xf3, 0xe0, 0xc0, 0x0,

    /* U+003F "?" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x70, 0x38, 0x78, 0x70,
    0x30, 0x18, 0x0, 0x7, 0x3, 0x81, 0xc0,

    /* U+0040 "@" */
    0x7, 0xe0, 0x3f, 0xe0, 0xe0, 0xe3, 0x80, 0x66,
    0x76, 0xf8, 0xfc, 0xf3, 0x19, 0xe6, 0x33, 0xcc,
    0x67, 0x98, 0xcf, 0x1e, 0xf3, 0x39, 0xc7, 0x0,
    0x7, 0x0, 0x7, 0xf8, 0x3, 0xf0,

    /* U+0041 "A" */
    0xf, 0x0, 0xf0, 0xf, 0x81, 0xd8, 0x1d, 0x81,
    0x9c, 0x39, 0xc3, 0x8c, 0x3f, 0xe7, 0xfe, 0x70,
    0x67, 0x7, 0xe0, 0x70,

    /* U+0042 "B" */
    0xff, 0x3f, 0xfe, 0x1f, 0x87, 0xe1, 0xbf, 0xcf,
    0xfb, 0x8f, 0xe1, 0xf8, 0x7e, 0x3f, 0xfe, 0xff,
    0x0,

    /* U+0043 "C" */
    0x1f, 0x83, 0xfc, 0x78, 0xef, 0x7, 0xe0, 0x7e,
    0x0, 0xe0, 0xe, 0x0, 0xe0, 0x77, 0x7, 0x78,
    0xe3, 0xfc, 0x1f, 0x80,

    /* U+0044 "D" */
    0xff, 0x1f, 0xf3, 0x8f, 0x70, 0xee, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xfc, 0x3b, 0x8f, 0x7f,
    0xcf, 0xf0,

    /* U+0045 "E" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0xfb, 0xfd,
    0xc0, 0xe0, 0x70, 0x38, 0x1f, 0xff, 0xf8,

    /* U+0046 "F" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0x3, 0xfd,
    0xfe, 0xe0, 0x70, 0x38, 0x1c, 0xe, 0x0,

    /* U+0047 "G" */
    0x1f, 0x83, 0xfc, 0x78, 0xef, 0x7, 0xe0, 0xe,
    0x0, 0xe3, 0xfe, 0x3f, 0xe0, 0x77, 0x7, 0x78,
    0xe3, 0xfe, 0xf, 0x80,

    /* U+0048 "H" */
    0xe0, 0xfc, 0x1f, 0x83, 0xf0, 0x7e, 0xf, 0xff,
    0xff, 0xff, 0x7, 0xe0, 0xfc, 0x1f, 0x83, 0xf0,
    0x7e, 0xe,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+004A "J" */
    0x3, 0x81, 0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe,
    0x7, 0x3, 0xf1, 0xf8, 0xef, 0xe3, 0xe0,

    /* U+004B "K" */
    0xe1, 0xdc, 0x33, 0x8e, 0x73, 0x8e, 0xe1, 0xf8,
    0x3f, 0x87, 0xf0, 0xe7, 0x1c, 0xf3, 0x8e, 0x70,
    0xee, 0x1e,

    /* U+004C "L" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0xe0, 0xff, 0xff,

    /* U+004D "M" */
    0xf0, 0x3f, 0xc0, 0xff, 0x83, 0xfe, 0x1f, 0xf8,
    0x7f, 0xb3, 0xfe, 0xcd, 0xfb, 0x37, 0xe7, 0x9f,
    0x9e, 0x7e, 0x79, 0xf8, 0xc7, 0xe3, 0x1c,

    /* U+004E "N" */
    0xe0, 0xfe, 0x1f, 0xc3, 0xfc, 0x7f, 0x8f, 0xd9,
    0xfb, 0xbf, 0x37, 0xe3, 0xfc, 0x7f, 0x87, 0xf0,
    0xfe, 0xe,

    /* U+004F "O" */
    0x1f, 0x83, 0xfc, 0x79, 0xef, 0xe, 0xe0, 0x7e,
    0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7f, 0xe, 0x71,
    0xe3, 0xfc, 0x1f, 0x80,

    /* U+0050 "P" */
    0xff, 0x3f, 0xee, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x3f, 0xfe, 0xff, 0x38, 0xe, 0x3, 0x80, 0xe0,
    0x0,

    /* U+0051 "Q" */
    0x1f, 0x83, 0xfc, 0x79, 0xef, 0xe, 0xe0, 0x7e,
    0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7f, 0x3e, 0x79,
    0xe3, 0xfc, 0x1f, 0xc0, 0xe,

    /* U+0052 "R" */
    0xff, 0x3f, 0xee, 0x3f, 0x87, 0xe1, 0xf8, 0xff,
    0xfb, 0xfc, 0xe7, 0x38, 0xee, 0x3b, 0x8f, 0xe1,
    0xc0,

    /* U+0053 "S" */
    0x3f, 0x1f, 0xee, 0x3b, 0x87, 0xe0, 0x3f, 0x87,
    0xf8, 0x3f, 0x1, 0xf8, 0x7e, 0x3d, 0xfe, 0x3f,
    0x0,

    /* U+0054 "T" */
    0xff, 0xff, 0xf1, 0xc0, 0x70, 0x1c, 0x7, 0x1,
    0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70, 0x1c,
    0x0,

    /* U+0055 "U" */
    0xe0, 0xfc, 0x1f, 0x83, 0xf0, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xfc, 0x1d, 0xc7, 0x3f,
    0xe1, 0xf0,

    /* U+0056 "V" */
    0xe0, 0x77, 0x6, 0x70, 0xe7, 0xe, 0x30, 0xe3,
    0x9c, 0x39, 0xc1, 0x9c, 0x1d, 0x81, 0xf8, 0xf,
    0x80, 0xf0, 0xf, 0x0,

    /* U+0057 "W" */
    0xe1, 0xc3, 0xb0, 0xe1, 0xdc, 0x70, 0xce, 0x3c,
    0xe3, 0x3e, 0x71, 0x9b, 0x38, 0xed, 0x98, 0x76,
    0x6c, 0x1f, 0x3e, 0xf, 0x1f, 0x7, 0x8f, 0x3,
    0xc3, 0x80, 0xc1, 0xc0,

    /* U+0058 "X" */
    0x70, 0x77, 0xe, 0x38, 0xc1, 0xdc, 0x1f, 0x80,
    0xf0, 0xf, 0x0, 0xf0, 0x1f, 0x81, 0x9c, 0x39,
    0xc7, 0xe, 0x70, 0x70,

    /* U+0059 "Y" */
    0xe0, 0xfc, 0x1d, 0xc7, 0x38, 0xe3, 0xb8, 0x36,
    0x7, 0xc0, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0, 0xe0,

    /* U+005A "Z" */
    0xff, 0xff, 0xf0, 0x38, 0xe, 0x7, 0x3, 0x81,
    0xc0, 0x70, 0x38, 0x1c, 0x6, 0x3, 0xff, 0xff,
    0xc0,

    /* U+005B "[" */
    0xff, 0xf9, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce,
    0x73, 0xff,

    /* U+005C "\\" */
    0xc7, 0x38, 0xc6, 0x31, 0xce, 0x31, 0x8c, 0x73,
    0x8c, 0x63,

    /* U+005D "]" */
    0xff, 0xf1, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x7f, 0xff,

    /* U+005E "^" */
    0x1c, 0x7, 0x83, 0xf0, 0xcc, 0x63, 0xb8, 0x60,

    /* U+005F "_" */
    0xff, 0xff, 0xf0,

    /* U+0060 "`" */
    0xcd, 0x80,

    /* U+0061 "a" */
    0x3e, 0x3f, 0x98, 0xe0, 0x77, 0xff, 0xff, 0x8f,
    0xc7, 0xff, 0xbd, 0xc0,

    /* U+0062 "b" */
    0xe0, 0x38, 0xe, 0x3, 0xbc, 0xff, 0xbc, 0xfe,
    0x1f, 0x87, 0xe1, 0xf8, 0x7f, 0x3f, 0xfe, 0xef,
    0x0,

    /* U+0063 "c" */
    0x3e, 0x3f, 0xbc, 0xfc, 0x3e, 0x7, 0x3, 0x87,
    0xe7, 0x7f, 0x1f, 0x0,

    /* U+0064 "d" */
    0x1, 0xc0, 0x70, 0x1c, 0xf7, 0x7f, 0xfc, 0xfe,
    0x1f, 0x87, 0xe1, 0xf8, 0x7f, 0x3d, 0xff, 0x3d,
    0xc0,

    /* U+0065 "e" */
    0x3e, 0x3f, 0xbc, 0xdc, 0x3f, 0xff, 0xff, 0x81,
    0xe7, 0x7f, 0x1f, 0x0,

    /* U+0066 "f" */
    0x3d, 0xf7, 0x3f, 0xfd, 0xc7, 0x1c, 0x71, 0xc7,
    0x1c, 0x70,

    /* U+0067 "g" */
    0x3d, 0xdf, 0xff, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0xcf, 0x7f, 0xcf, 0x7f, 0x1d, 0xfe, 0x3f,
    0x0,

    /* U+0068 "h" */
    0xe0, 0x70, 0x38, 0x1d, 0xef, 0xf7, 0x9f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x38,

    /* U+0069 "i" */
    0x5f, 0xaf, 0xff, 0xff, 0xff, 0xc0,

    /* U+006A "j" */
    0x1, 0xce, 0x23, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0x9c, 0xff, 0xf0,

    /* U+006B "k" */
    0xe0, 0x70, 0x38, 0x1c, 0x7e, 0x77, 0x73, 0xf1,
    0xf8, 0xfc, 0x77, 0x39, 0xdc, 0xee, 0x38,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+006D "m" */
    0xee, 0x77, 0xf7, 0xf9, 0xcf, 0xce, 0x7e, 0x73,
    0xf3, 0x9f, 0x9c, 0xfc, 0xe7, 0xe7, 0x3f, 0x39,
    0xc0,

    /* U+006E "n" */
    0xef, 0x7f, 0xfc, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xc0,

    /* U+006F "o" */
    0x1e, 0x1f, 0xe7, 0x3b, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0xce, 0x7f, 0x8f, 0x80,

    /* U+0070 "p" */
    0xef, 0x3f, 0xef, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0xcf, 0xff, 0xbb, 0xce, 0x3, 0x80, 0xe0,
    0x0,

    /* U+0071 "q" */
    0x3d, 0xdf, 0xff, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0xcf, 0x7f, 0xcf, 0x70, 0x1c, 0x7, 0x1,
    0xc0,

    /* U+0072 "r" */
    0xef, 0xff, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x80,

    /* U+0073 "s" */
    0x7c, 0xfe, 0xe7, 0xe0, 0xfc, 0x3f, 0x7, 0xe7,
    0xff, 0x3c,

    /* U+0074 "t" */
    0x71, 0xc7, 0x3f, 0xfd, 0xc7, 0x1c, 0x71, 0xc7,
    0x1f, 0x3c,

    /* U+0075 "u" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xcf, 0xff, 0xbd, 0xc0,

    /* U+0076 "v" */
    0xe1, 0xb1, 0xd8, 0xee, 0x63, 0x31, 0xb8, 0xd8,
    0x7c, 0x1e, 0xe, 0x0,

    /* U+0077 "w" */
    0xe3, 0x1d, 0x8e, 0x76, 0x79, 0x99, 0xe6, 0x77,
    0x98, 0xd3, 0xe3, 0xcf, 0xf, 0x3c, 0x3c, 0xf0,
    0x71, 0xc0,

    /* U+0078 "x" */
    0x63, 0xb9, 0x8d, 0xc7, 0xc1, 0xe0, 0xf0, 0xf8,
    0x6e, 0x73, 0x71, 0xc0,

    /* U+0079 "y" */
    0xe1, 0x98, 0x67, 0x39, 0xcc, 0x33, 0xd, 0xc3,
    0xf0, 0x78, 0x1e, 0x7, 0x81, 0xc1, 0xf0, 0x78,
    0x0,

    /* U+007A "z" */
    0xff, 0xff, 0xe, 0xe, 0x1c, 0x38, 0x70, 0x70,
    0xff, 0xff,

    /* U+007B "{" */
    0x1e, 0x7c, 0xe1, 0xc3, 0x87, 0xe, 0x78, 0xf0,
    0x70, 0xe1, 0xc3, 0x87, 0xf, 0x8f,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xe1, 0xf0, 0xe1, 0xc3, 0x87, 0xe, 0xf, 0x1e,
    0x70, 0xe1, 0xc3, 0x87, 0x3e, 0x78,

    /* U+007E "~" */
    0xf8, 0x7f, 0xc3, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 57, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 91, .box_w = 3, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 131, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 10, .adv_w = 184, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 186, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 50, .adv_w = 256, .box_w = 15, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 202, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 78, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 97, .adv_w = 110, .box_w = 5, .box_h = 16, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 107, .adv_w = 110, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 117, .adv_w = 129, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 122, .adv_w = 186, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 134, .adv_w = 69, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 136, .adv_w = 127, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 138, .adv_w = 69, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 87, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 150, .adv_w = 189, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 138, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 174, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 186, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 180, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 188, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 165, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 187, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 188, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 69, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 69, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 321, .adv_w = 186, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 333, .adv_w = 186, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 341, .adv_w = 186, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 353, .adv_w = 154, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 256, .box_w = 15, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 398, .adv_w = 199, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 184, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 205, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 202, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 165, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 158, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 209, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 210, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 76, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 161, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 188, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 156, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 248, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 206, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 217, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 178, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 217, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 691, .adv_w = 184, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 182, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 173, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 742, .adv_w = 204, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 760, .adv_w = 195, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 780, .adv_w = 278, .box_w = 17, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 197, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 192, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 846, .adv_w = 182, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 110, .box_w = 5, .box_h = 16, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 873, .adv_w = 87, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 883, .adv_w = 110, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 895, .adv_w = 186, .box_w = 10, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 903, .adv_w = 166, .box_w = 10, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 906, .adv_w = 144, .box_w = 3, .box_h = 3, .ofs_x = 3, .ofs_y = 11},
    {.bitmap_index = 908, .adv_w = 158, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 172, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 157, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 949, .adv_w = 172, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 966, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 978, .adv_w = 103, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 171, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1005, .adv_w = 168, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1020, .adv_w = 69, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1026, .adv_w = 69, .box_w = 5, .box_h = 17, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 1037, .adv_w = 155, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1052, .adv_w = 70, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1057, .adv_w = 249, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1074, .adv_w = 166, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1086, .adv_w = 165, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1099, .adv_w = 171, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1116, .adv_w = 171, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1133, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1141, .adv_w = 148, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1151, .adv_w = 102, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1161, .adv_w = 166, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1173, .adv_w = 152, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1185, .adv_w = 228, .box_w = 14, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1203, .adv_w = 152, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1215, .adv_w = 155, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1232, .adv_w = 146, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1242, .adv_w = 110, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1256, .adv_w = 70, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1260, .adv_w = 110, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1274, .adv_w = 186, .box_w = 9, .box_h = 3, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 0, 0, 3, 4, 5, 4, 5,
    6, 7, 8, 9, 10, 11, 12, 13,
    14, 10, 7, 15, 15, 16, 17, 18,
    19, 20, 21, 22, 23, 24, 25, 26,
    27, 28, 28, 29, 30, 31, 28, 28,
    24, 32, 24, 33, 34, 35, 29, 36,
    37, 38, 39, 40, 0, 41, 0, 3,
    42, 0, 43, 44, 45, 46, 47, 48,
    49, 43, 50, 50, 51, 46, 43, 43,
    44, 44, 49, 52, 53, 54, 55, 56,
    57, 58, 56, 59, 0, 0, 60, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 2, 3, 0, 0, 0, 4,
    3, 5, 0, 6, 7, 8, 7, 8,
    9, 10, 11, 12, 13, 14, 15, 10,
    16, 17, 18, 19, 19, 20, 21, 22,
    23, 24, 25, 26, 27, 26, 26, 26,
    27, 26, 26, 28, 26, 26, 26, 26,
    27, 26, 27, 26, 29, 30, 31, 32,
    33, 34, 35, 36, 5, 37, 0, 6,
    38, 0, 39, 40, 41, 41, 41, 42,
    41, 40, 43, 44, 40, 40, 45, 45,
    41, 45, 41, 45, 46, 47, 48, 49,
    50, 51, 49, 52, 53, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 2, -2, 0, 2, 0, -7,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, 0, -4, -4, 0, 0, 0, -2,
    0, -2, 0, -4, 0, -2, -2, 0,
    -4, -4, 0, -6, 0, 3, 4, -1,
    2, 0, -18, 0, -7, -6, 0, -13,
    0, -4, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -2, -2, -2, -2, 0,
    0, 0, 0, 0, 2, -7, 0, 4,
    0, -8, 0, 0, 0, 0, 0, -9,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -17, 0, -7, 0,
    0, -6, 0, 0, 0, -4, -11, 0,
    -3, 3, -1, -6, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -13, 1, 0, 0, 0, 4, 2,
    1, 2, 2, 2, 0, 0, 0, 0,
    1, -1, 2, 10, 0, 0, 0, 0,
    0, 1, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    -1, -1, 0, 0, -1, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, -2, -1, -3, 0, 0,
    -5, 0, -3, -3, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, -2,
    -2, -1, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, -1,
    0, 0, 0, -1, -1, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, -2, 0, 0, -3,
    0, -4, -4, -4, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, -1, -3, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, -3, -3,
    -3, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, -1, 0, -5, -5, -6, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    -27, 0, -2, 0, 0, 0, -15, 0,
    0, 0, 0, -3, -11, 0, 0, 0,
    0, -16, 0, -1, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, -6, 0, 0, 0, 0, -6, 0,
    -2, 0, 0, -1, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, 0, 0, 0,
    0, 0, 0, 0, 0, -9, 0, 0,
    0, 0, -17, 0, -10, -10, -13, -17,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, -5, -8,
    -4, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -11, 0, 0, -10, 0, 0,
    0, 0, -2, -4, -2, 0, 0, 0,
    -3, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, 0, -13, 0, -8, -8,
    -9, -12, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -15, -3,
    0, -18, -6, 0, 0, -4, -12, 0,
    -2, 0, -4, -4, -2, -2, 0, -9,
    -4, 0, -11, -2, 0, 0, -10, -2,
    -4, -27, -6, -25, -19, -2, -28, 0,
    -13, 0, -2, 0, -6, -3, 0, 0,
    0, -1, -10, -5, -13, -13, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0,
    -2, -2, -2, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -4, 0, 1,
    0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, -7, 0,
    0, 0, 0, -6, 0, -3, -3, -8,
    -9, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 2,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, -15, -8, 0, 0, 0, 0,
    0, -1, -1, 0, 0, 0, 0, -2,
    0, -1, 0, -8, 0, 0, 0, 0,
    -11, 0, -7, -7, -12, -12, -1, -4,
    -6, -1, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -1, -2, 0,
    0, -1, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, -8, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    -4, -2, 0, 0, 0, -14, 0, 0,
    -17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -22, -6, 0, -4, 0, 0,
    0, 0, -4, 0, 0, -2, -2, -4,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, -6, 0, 0, 0, 0, -1,
    0, -1, -1, -3, -4, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, -3, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, -4, 0, -9, -16,
    0, 0, -11, -8, 0, -8, -6, -6,
    0, -6, -7, 0, -16, -6, 0, -2,
    -4, 0, 0, -8, -2, -1, 0, -1,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, -10, 0, 0, 0, 0, -4, -4,
    -2, -8, -8, 0, 0, 0, 0, 0,
    -20, -1, 0, -21, -9, 0, 0, -4,
    -13, 0, -1, 0, -2, -3, 0, 0,
    0, -14, -2, 0, -8, 0, 0, 0,
    -8, 0, 0, -26, -6, -17, -16, 0,
    -32, 0, -8, 0, 0, 0, -2, -1,
    0, 0, 0, 0, -9, 0, -14, -13,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, -2, -18, -14, 0, 0, 0, 0,
    -2, -1, 0, 0, 0, 0, -2, -2,
    0, 0, 0, -19, 0, 0, -20, 0,
    0, 0, -2, -2, -4, -7, -3, 0,
    -28, -10, 0, -5, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -2, 0, -11, 0, 0, 0, -4, 0,
    -1, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, -6, 0, -2, -2, -4, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -10, 0, -4,
    -15, -20, -8, -8, 0, 0, 0, -12,
    -1, 0, -2, -1, -13, -17, -13, 0,
    0, -13, -27, 0, -11, -17, 0, 0,
    0, 0, 0, 0, 0, 0, 4, -17,
    -34, 0, -33, 0, -6, -4, -19, -28,
    0, -19, -17, -14, -18, -18, 0, 0,
    0, 0, -6, 0, -2, -8, -21, -18,
    -6, -1, -1, -2, -11, -3, 0, -5,
    -5, -2, -10, -4, 0, 0, -8, -25,
    0, -3, -16, -4, 0, 0, 0, 0,
    0, 0, 0, 2, -20, -20, 0, -20,
    -1, -2, 0, -7, -16, -2, -10, -3,
    -2, -2, -6, 0, 0, 0, 0, -8,
    0, -2, -8, -16, -17, -4, -1, -1,
    -2, -8, -3, 0, -5, -5, -2, -10,
    -11, 0, -2, -8, -19, 0, -7, -13,
    -2, 0, 0, 0, 0, 0, 0, 0,
    2, -16, -19, 0, -17, 0, 0, 0,
    -6, -14, -1, -6, -2, -1, -1, -4,
    0, 0, 0, 0, 0, 0, -6, -13,
    0, 0, -8, -2, 0, -4, -4, -4,
    0, -6, -4, 0, -13, -8, 0, -4,
    -9, -2, 0, -11, -2, -4, 0, 0,
    0, 0, 0, 0, 0, 2, 0, -6,
    0, -11, 0, 0, 0, 0, -6, -3,
    -4, -7, -7, 0, 0, 0, 0, 0,
    0, -12, 0, -6, -18, -25, -18, -11,
    0, -4, -5, -13, -1, 0, -6, -6,
    -4, -17, -14, 0, -2, -12, -28, 0,
    -18, -18, -13, 0, 0, 0, 0, 0,
    0, 0, 2, -20, -30, -4, -31, -4,
    -4, -2, -15, -29, -2, -19, -11, -11,
    -10, -15, 0, 0, 0, 0, 0, 0,
    -4, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, -2,
    0, 0, -1, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -6, 0, 0, -17, -11, -18,
    -17, -2, -15, 0, 0, 0, 0, 1,
    -2, -2, 8, 0, 0, 0, 0, 0,
    -11, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, -17, 0, -20, -16, 0, -20,
    0, 0, -4, -3, 0, -8, 0, 0,
    24, 0, -3, 0, 0, 6, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, -1, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, -30,
    0, -17, -15, 0, -27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -3,
    0, -2, -2, 0, 0, 0, -5, 0,
    0, 0, -1, -1, -4, 0, 0, -6,
    0, 0, 0, 0, -32, 0, -20, -17,
    -11, -31, -1, -1, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    -1, -11, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, -1, 0,
    0, 0, 0, -1, 0, 0, 0, -3,
    -1, 0, 0, 0, -2, 0, 0, 0,
    0, -15, 0, -13, -11, -8, -20, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -1, 0, 0,
    0, 0, -1, 0, -2, 0, -4, 0,
    0, 0, 0, -33, 0, -17, -13, -8,
    -20, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, -1,
    -2, 0, 0, 0, 0, 0, -2, 0,
    0, -3, -7, -2, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, -8, -6,
    0, 0, -6, -11, 0, 0, -8, -1,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, -8, 0, -11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -11, 0, -7,
    -6, 0, -12, 0, -1, 3, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -6, 0, -2, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -8, 0, 1, 0, -3, 0, -3, -4,
    -3, 0, 0, 0, 0, -16, -7, 0,
    0, 0, 0, 0, -5, -4, -1, -5,
    0, 0, 0, 0, -7, 0, 1, 0,
    -1, 0, -7, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -15, -4,
    0, 0, 0, 0, -3, 0, -2, 0,
    0, 0, -4, -3, 0, 0, 0, -4,
    0, 0, -7, 0, -13, 0, -1, -1,
    -1, -2, 0, 1, 0, -4, 0, -5,
    1, 0, 0, 0, 0, 6, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    -2, 0, 0, 0, -1, 0, 0, 1,
    0, -28, 0, -15, -13, -6, -29, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, -1, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, -1, -2, -1,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    -2, -1, -1, -8, 0, 0, 0, -1,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -18, 0, -10, -6, 0,
    -17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, -2, -19, -10, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, -6, -2,
    0, 0, 0, -13, 0, 0, -9, 0,
    -17, 0, -3, -2, -7, -11, 0, 1,
    -17, -4, 0, -5, 0, 0, 0, 0,
    -1, 0, 0, 2, 2, 2, 0, 0,
    0, 0, 2, 0, 0, 0, -2, -17,
    -7, 0, 0, 0, 0, -1, -1, 0,
    -1, 0, 0, -6, -2, 0, 0, 0,
    -13, 0, 0, -6, 0, -14, 0, -2,
    -1, -7, -11, 0, 2, 0, -5, 0,
    -2, 0, 0, 0, 0, -1, 0, 0,
    2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, -1, -4, 0, -1, -1, 0, 0,
    -8, -6, 0, 0, 0, 0, 0, -4,
    -3, 0, -18, 0, -2, -1, 0, -10,
    0, 0, 0, -2, 0, -4, 0, 0,
    0, 0, -1, 0, 0, 2, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, -3,
    0, -2, 0, 0, 0, -4, -2, 0,
    0, 0, 0, 0, -1, 0, -1, -18,
    0, -6, -4, 0, -15, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 60,
    .right_class_cnt     = 53,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_SF_PRO_18 = {
#else
lv_font_t ui_font_SF_PRO_18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_SF_PRO_18*/

