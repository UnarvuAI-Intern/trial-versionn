/*******************************************************************************
 * Size: 22 px
 * Bpp: 1
 * Opts: --bpp 1 --size 22 --font /home/dhaanesvar/SquareLine/assets/SF-Pro-Display-Roman-Family/SF-Pro-Display-Bold.otf -o /home/dhaanesvar/SquareLine/assets/SF-Pro-Display-Roman-Family/ui_font_SF_PRO_bold_22.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_SF_PRO_BOLD_22
#define UI_FONT_SF_PRO_BOLD_22 1
#endif

#if UI_FONT_SF_PRO_BOLD_22

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xfc, 0x0, 0x3f,

    /* U+0022 "\"" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xc0,

    /* U+0023 "#" */
    0x6, 0x30, 0x38, 0xc0, 0xe7, 0x3, 0x1c, 0x7f,
    0xfd, 0xff, 0xf1, 0xc6, 0x7, 0x18, 0x18, 0xe0,
    0x63, 0x8f, 0xff, 0xbf, 0xfe, 0x38, 0xc0, 0xe7,
    0x3, 0x1c, 0xc, 0x60,

    /* U+0024 "$" */
    0x4, 0x1, 0xf8, 0x7f, 0xef, 0x5e, 0xe4, 0x7e,
    0x40, 0xf4, 0xf, 0xe0, 0x7f, 0xc3, 0xfe, 0x7,
    0xf0, 0x4f, 0x4, 0x7e, 0x47, 0xf4, 0xe7, 0xfe,
    0x3f, 0x80, 0x40, 0x4, 0x0,

    /* U+0025 "%" */
    0x3c, 0xe, 0x1f, 0x83, 0xc, 0x71, 0xc3, 0x1c,
    0x60, 0xc7, 0x38, 0x31, 0xdc, 0x7, 0xe6, 0x0,
    0xf3, 0x80, 0x1, 0xc7, 0x0, 0x63, 0xe0, 0x39,
    0xdc, 0x1c, 0x63, 0x7, 0x18, 0xc3, 0x86, 0x30,
    0xc0, 0xd8, 0x70, 0x1c,

    /* U+0026 "&" */
    0x1f, 0x80, 0x3f, 0xc0, 0x79, 0xe0, 0x70, 0xe0,
    0x70, 0xe0, 0x39, 0xc0, 0x1f, 0x80, 0x1f, 0x1c,
    0x7f, 0x1c, 0x77, 0x9c, 0xe3, 0xdc, 0xe0, 0xf8,
    0xe0, 0x78, 0xf0, 0xf8, 0x7f, 0xfc, 0x1f, 0x9e,

    /* U+0027 "'" */
    0xff, 0xff, 0xc0,

    /* U+0028 "(" */
    0x18, 0xe7, 0x1c, 0x73, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0x8f, 0x1c, 0x71, 0xc3, 0x86,

    /* U+0029 ")" */
    0xe1, 0xc3, 0x8e, 0x38, 0xf1, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x73, 0xce, 0x38, 0xe7, 0x38,

    /* U+002A "*" */
    0x18, 0x5a, 0xff, 0x7e, 0x7e, 0xff, 0x5a, 0x18,

    /* U+002B "+" */
    0xe, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0xff, 0xff,
    0xff, 0xe, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0xe,
    0x0,

    /* U+002C "," */
    0x77, 0x76, 0x6e,

    /* U+002D "-" */
    0xff, 0xfc,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0xe, 0x18, 0x70, 0xe1, 0xc3, 0x86, 0x1c, 0x38,
    0x70, 0xe1, 0x87, 0xe, 0x1c, 0x38, 0x61, 0xc3,
    0x87, 0x0,

    /* U+0030 "0" */
    0xf, 0x3, 0xfc, 0x79, 0xe7, 0xe, 0xe0, 0x7e,
    0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7e, 0x7, 0xe0,
    0x7e, 0x7, 0x70, 0xe7, 0x9e, 0x3f, 0xc0, 0xf0,

    /* U+0031 "1" */
    0x1e, 0x7d, 0xff, 0x7c, 0xf1, 0xc3, 0x87, 0xe,
    0x1c, 0x38, 0x70, 0xe1, 0xc3, 0x87,

    /* U+0032 "2" */
    0x1f, 0xf, 0xf9, 0xc7, 0x70, 0x7e, 0xe, 0x1,
    0xc0, 0x78, 0xe, 0x3, 0xc0, 0xf0, 0x3c, 0xf,
    0x3, 0xc0, 0xf0, 0x3f, 0xff, 0xff,

    /* U+0033 "3" */
    0xf, 0x83, 0xfe, 0x78, 0xf7, 0x7, 0x0, 0x70,
    0x7, 0x0, 0xe0, 0xfc, 0xf, 0xe0, 0xe, 0x0,
    0x70, 0x7, 0x70, 0x77, 0x8e, 0x3f, 0xe1, 0xf8,

    /* U+0034 "4" */
    0x3, 0xe0, 0x1f, 0x1, 0xf8, 0xd, 0xc0, 0xee,
    0xe, 0x70, 0x73, 0x87, 0x1c, 0x38, 0xe3, 0x87,
    0x18, 0x39, 0xff, 0xff, 0xff, 0x80, 0x70, 0x3,
    0x80, 0x1c,

    /* U+0035 "5" */
    0x7f, 0xe7, 0xfe, 0x70, 0x7, 0x0, 0x70, 0x7,
    0x78, 0x7f, 0xe7, 0x8e, 0x70, 0x70, 0x7, 0x0,
    0x7e, 0x7, 0xf0, 0x77, 0x8e, 0x3f, 0xc1, 0xf8,

    /* U+0036 "6" */
    0xf, 0x83, 0xfc, 0x78, 0xe7, 0xf, 0xe0, 0xe,
    0x0, 0xe7, 0x8f, 0xfe, 0xf8, 0xef, 0x7, 0xf0,
    0x7e, 0x7, 0x70, 0x77, 0x8e, 0x3f, 0xc0, 0xf8,

    /* U+0037 "7" */
    0xff, 0xff, 0xfc, 0x3, 0x80, 0xe0, 0x1c, 0x7,
    0x0, 0xe0, 0x38, 0x7, 0x1, 0xe0, 0x38, 0xf,
    0x1, 0xc0, 0x78, 0xe, 0x3, 0xc0,

    /* U+0038 "8" */
    0xf, 0x83, 0xfe, 0x78, 0xf7, 0x7, 0x70, 0x77,
    0x7, 0x38, 0xe1, 0xfc, 0x3f, 0xc7, 0xe, 0xe0,
    0x7e, 0x7, 0xe0, 0x7f, 0xf, 0x7f, 0xe1, 0xf8,

    /* U+0039 "9" */
    0x1f, 0x3, 0xfc, 0x71, 0xee, 0xe, 0xe0, 0x7e,
    0x7, 0xe0, 0xf7, 0x1f, 0x7f, 0xf1, 0xe7, 0x0,
    0x70, 0x6, 0xf0, 0xe7, 0x1e, 0x3f, 0xc1, 0xf0,

    /* U+003A ":" */
    0xfc, 0x0, 0x0, 0x1f, 0x80,

    /* U+003B ";" */
    0xfc, 0x0, 0x0, 0xfb, 0x6d, 0x80,

    /* U+003C "<" */
    0x0, 0x30, 0x1f, 0xf, 0xf7, 0xf8, 0xfc, 0xe,
    0x0, 0xfc, 0x7, 0xf8, 0xf, 0xf0, 0x1f, 0x0,
    0x70,

    /* U+003D "=" */
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xff,

    /* U+003E ">" */
    0xc0, 0xf, 0x80, 0xfe, 0x3, 0xfc, 0x7, 0xf0,
    0xf, 0x3, 0xf1, 0xfe, 0xff, 0xf, 0x80, 0xc0,
    0x0,

    /* U+003F "?" */
    0x3e, 0x1f, 0xef, 0x3f, 0x87, 0x1, 0xc0, 0x70,
    0x3c, 0x3e, 0xf, 0x7, 0x81, 0xc0, 0x70, 0x0,
    0x0, 0x1, 0xc0, 0x70,

    /* U+0040 "@" */
    0x3, 0xf0, 0x3, 0xff, 0x81, 0xc0, 0xf0, 0xe0,
    0xe, 0x70, 0x1, 0x98, 0xee, 0x7c, 0x7f, 0x8f,
    0x3d, 0xe3, 0xce, 0x38, 0xf3, 0x8e, 0x3c, 0xe3,
    0x8f, 0x3d, 0xe6, 0xc7, 0xdf, 0x98, 0xe3, 0xc7,
    0x0, 0x0, 0xe0, 0x0, 0x1c, 0x0, 0x3, 0xfe,
    0x0, 0x3f, 0x0,

    /* U+0041 "A" */
    0x3, 0xc0, 0xf, 0x80, 0x1f, 0x0, 0x3f, 0x0,
    0xee, 0x1, 0xdc, 0x3, 0x9c, 0xe, 0x38, 0x1c,
    0x70, 0x78, 0xf0, 0xff, 0xe1, 0xff, 0xc7, 0x83,
    0xce, 0x3, 0x9c, 0x7, 0x78, 0xf,

    /* U+0042 "B" */
    0xff, 0x8f, 0xfc, 0xe1, 0xee, 0xe, 0xe0, 0xee,
    0xe, 0xe1, 0xcf, 0xf8, 0xff, 0xce, 0xe, 0xe0,
    0x7e, 0x7, 0xe0, 0x7e, 0xf, 0xff, 0xef, 0xf8,

    /* U+0043 "C" */
    0xf, 0xc0, 0x7f, 0xc3, 0x87, 0x9c, 0xe, 0x70,
    0x3f, 0x80, 0xe, 0x0, 0x38, 0x0, 0xe0, 0x3,
    0x80, 0xe, 0x0, 0x1c, 0xf, 0x70, 0x38, 0xe1,
    0xe1, 0xff, 0x3, 0xf0,

    /* U+0044 "D" */
    0xff, 0x87, 0xfe, 0x38, 0x39, 0xc0, 0xee, 0x7,
    0x70, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0xee, 0x7, 0x70, 0xf3, 0xff,
    0x1f, 0xf0,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0x80, 0x70, 0xe, 0x1, 0xc0,
    0x38, 0x7, 0xfe, 0xff, 0xdc, 0x3, 0x80, 0x70,
    0xe, 0x1, 0xc0, 0x3f, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xfe, 0x3, 0x80, 0xe0, 0x38, 0xe,
    0x3, 0xff, 0xff, 0xf8, 0xe, 0x3, 0x80, 0xe0,
    0x38, 0xe, 0x3, 0x80,

    /* U+0047 "G" */
    0xf, 0xc0, 0x7f, 0xc3, 0x87, 0x9c, 0xf, 0x70,
    0x1f, 0x80, 0xe, 0x0, 0x38, 0x7f, 0xe1, 0xff,
    0x80, 0x7e, 0x1, 0xdc, 0x7, 0x70, 0x38, 0xe1,
    0xe1, 0xff, 0x3, 0xf0,

    /* U+0048 "H" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xff, 0xff, 0xff, 0xff, 0x1,
    0xf8, 0xf, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x80,
    0xfc, 0x7,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+004A "J" */
    0x1, 0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70,
    0x1c, 0x7, 0x1, 0xc0, 0x70, 0x1c, 0x7, 0xe1,
    0xfc, 0xe7, 0xf8, 0xf8,

    /* U+004B "K" */
    0xe0, 0xf7, 0x7, 0x38, 0x71, 0xc7, 0x8e, 0x78,
    0x77, 0x83, 0xb8, 0x1f, 0xc0, 0xff, 0x7, 0xb8,
    0x39, 0xe1, 0xc7, 0x8e, 0x1c, 0x70, 0xf3, 0x83,
    0xdc, 0xe,

    /* U+004C "L" */
    0xe0, 0x38, 0xe, 0x3, 0x80, 0xe0, 0x38, 0xe,
    0x3, 0x80, 0xe0, 0x38, 0xe, 0x3, 0x80, 0xe0,
    0x38, 0xf, 0xff, 0xff,

    /* U+004D "M" */
    0xf0, 0xf, 0xf0, 0xf, 0xf8, 0x1f, 0xf8, 0x1f,
    0xf8, 0x1f, 0xfc, 0x3f, 0xec, 0x3f, 0xee, 0x37,
    0xee, 0x77, 0xe6, 0x67, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe3, 0xc7, 0xe3, 0xc7, 0xe1, 0xc7, 0xe1, 0x87,

    /* U+004E "N" */
    0xe0, 0x3f, 0x81, 0xfc, 0xf, 0xf0, 0x7f, 0xc3,
    0xff, 0x1f, 0xb8, 0xfd, 0xe7, 0xe7, 0xbf, 0x1d,
    0xf8, 0x7f, 0xc3, 0xfe, 0xf, 0xf0, 0x3f, 0x81,
    0xfc, 0x7,

    /* U+004F "O" */
    0x7, 0xc0, 0x3f, 0xe0, 0xf1, 0xe3, 0x80, 0xe7,
    0x1, 0xdc, 0x1, 0xf8, 0x3, 0xf0, 0x7, 0xe0,
    0xf, 0xc0, 0x1f, 0x80, 0x3b, 0x80, 0xe7, 0x1,
    0xc7, 0xf, 0x7, 0xfc, 0x7, 0xf0,

    /* U+0050 "P" */
    0xff, 0x8f, 0xfc, 0xe0, 0xee, 0x7, 0xe0, 0x7e,
    0x7, 0xe0, 0x7e, 0xf, 0xe1, 0xef, 0xfc, 0xff,
    0x8e, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0,

    /* U+0051 "Q" */
    0x7, 0xc0, 0x3f, 0xe0, 0xf1, 0xe3, 0x80, 0xe7,
    0x1, 0xdc, 0x1, 0xf8, 0x3, 0xf0, 0x7, 0xe0,
    0xf, 0xc0, 0x1f, 0x80, 0x3b, 0x8e, 0xf7, 0xf,
    0xc7, 0x1f, 0x87, 0xfe, 0x3, 0xfc, 0x0, 0x1c,

    /* U+0052 "R" */
    0xff, 0x8f, 0xfe, 0xe0, 0xee, 0x7, 0xe0, 0x7e,
    0x7, 0xe0, 0x7e, 0xf, 0xff, 0xef, 0xfc, 0xe3,
    0xce, 0x1c, 0xe1, 0xee, 0xe, 0xe0, 0xfe, 0x7,

    /* U+0053 "S" */
    0x1f, 0x87, 0xfe, 0x70, 0xee, 0x7, 0xe0, 0xf,
    0x0, 0xff, 0x7, 0xfc, 0x3f, 0xe0, 0xff, 0x0,
    0xf0, 0x7, 0xe0, 0x7f, 0xe, 0x7f, 0xe1, 0xf8,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0x7, 0x0, 0x70, 0x7, 0x0,
    0x70, 0x7, 0x0, 0x70, 0x7, 0x0, 0x70, 0x7,
    0x0, 0x70, 0x7, 0x0, 0x70, 0x7, 0x0, 0x70,

    /* U+0055 "U" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x7e, 0x7, 0xb8, 0x78, 0xff,
    0x83, 0xf8,

    /* U+0056 "V" */
    0xf0, 0x1c, 0xe0, 0x39, 0xe0, 0xf3, 0xc1, 0xc3,
    0x83, 0x87, 0xf, 0xf, 0x1e, 0xe, 0x38, 0x1c,
    0x70, 0x3d, 0xe0, 0x3b, 0x80, 0x77, 0x0, 0xee,
    0x0, 0xf8, 0x1, 0xf0, 0x3, 0xe0,

    /* U+0057 "W" */
    0x70, 0x70, 0x7b, 0x83, 0x83, 0x9c, 0x1e, 0x1c,
    0xf1, 0xf0, 0xe3, 0x8f, 0x8f, 0x1c, 0x7c, 0x70,
    0xe3, 0x73, 0x87, 0x3b, 0x9c, 0x1d, 0xdc, 0xe0,
    0xec, 0x6e, 0x7, 0x63, 0xf0, 0x3f, 0x1f, 0x80,
    0xf8, 0x7c, 0x7, 0x83, 0xc0, 0x3c, 0x1e, 0x1,
    0xe0, 0xf0,

    /* U+0058 "X" */
    0x78, 0x1c, 0xf0, 0x78, 0xf0, 0xe0, 0xe3, 0x81,
    0xef, 0x1, 0xdc, 0x1, 0xf0, 0x3, 0xe0, 0x7,
    0xc0, 0x1f, 0xc0, 0x3b, 0x80, 0xf7, 0x81, 0xc7,
    0x7, 0xf, 0x1e, 0xf, 0x38, 0xe,

    /* U+0059 "Y" */
    0xe0, 0x3f, 0x83, 0xdc, 0x1c, 0xf1, 0xe3, 0x8e,
    0xe, 0xe0, 0x77, 0x1, 0xf0, 0xf, 0x80, 0x38,
    0x1, 0xc0, 0xe, 0x0, 0x70, 0x3, 0x80, 0x1c,
    0x0, 0xe0,

    /* U+005A "Z" */
    0xff, 0xff, 0xff, 0x0, 0xe0, 0x1e, 0x3, 0xc0,
    0x38, 0x7, 0x80, 0xf0, 0xe, 0x1, 0xe0, 0x3c,
    0x3, 0x80, 0x78, 0x7, 0x0, 0xff, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8f, 0xff,

    /* U+005C "\\" */
    0xe1, 0xc3, 0x83, 0x7, 0xe, 0x1c, 0x38, 0x30,
    0x70, 0xe1, 0xc3, 0x83, 0x7, 0xe, 0x1c, 0x38,
    0x30, 0x70,

    /* U+005D "]" */
    0xff, 0xf1, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x7f, 0xff,

    /* U+005E "^" */
    0xf, 0x0, 0xf0, 0x1f, 0x83, 0x9c, 0x39, 0xc7,
    0xe, 0xf0, 0x70,

    /* U+005F "_" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+0060 "`" */
    0xe3, 0x8c, 0x70,

    /* U+0061 "a" */
    0x1f, 0x1f, 0xe7, 0x3d, 0x87, 0x1, 0xcf, 0xf7,
    0xff, 0x87, 0xe1, 0xf8, 0xf7, 0xfc, 0xf7,

    /* U+0062 "b" */
    0xe0, 0x1c, 0x3, 0x80, 0x70, 0xe, 0xf9, 0xff,
    0xbc, 0x77, 0x7, 0xe0, 0xfc, 0x1f, 0x83, 0xf0,
    0x7e, 0xf, 0xe3, 0xbf, 0xf7, 0x7c,

    /* U+0063 "c" */
    0x1f, 0x7, 0xf9, 0xc7, 0xf0, 0x7e, 0x1, 0xc0,
    0x38, 0x7, 0x0, 0xe0, 0xee, 0x3c, 0xff, 0xf,
    0x80,

    /* U+0064 "d" */
    0x0, 0xe0, 0x1c, 0x3, 0x80, 0x73, 0xee, 0xff,
    0xdc, 0x7f, 0x7, 0xe0, 0xfc, 0x1f, 0x83, 0xf0,
    0x7f, 0x1e, 0xe3, 0xdf, 0xf9, 0xf7,

    /* U+0065 "e" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7e, 0xf, 0xff,
    0xff, 0xff, 0x0, 0xe0, 0xe, 0x3c, 0xff, 0xf,
    0x80,

    /* U+0066 "f" */
    0x1e, 0x7c, 0xe1, 0xcf, 0xff, 0xce, 0x1c, 0x38,
    0x70, 0xe1, 0xc3, 0x87, 0xe, 0x1c,

    /* U+0067 "g" */
    0x3e, 0xef, 0xfd, 0xc7, 0xf0, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xee, 0x3d, 0xff, 0x9f,
    0x70, 0xf, 0xe3, 0xdf, 0xf0, 0xf8,

    /* U+0068 "h" */
    0xe0, 0x1c, 0x3, 0x80, 0x70, 0xe, 0xf9, 0xff,
    0xbc, 0x7f, 0x7, 0xe0, 0xfc, 0x1f, 0x83, 0xf0,
    0x7e, 0xf, 0xc1, 0xf8, 0x3f, 0x7,

    /* U+0069 "i" */
    0xfc, 0x7f, 0xff, 0xff, 0xff, 0xf8,

    /* U+006A "j" */
    0x39, 0xc0, 0x3, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0x9c, 0xe7, 0x39, 0xfd, 0xe0,

    /* U+006B "k" */
    0xe0, 0x1c, 0x3, 0x80, 0x70, 0xe, 0x1d, 0xc7,
    0x39, 0xc7, 0x78, 0xfe, 0x1f, 0x83, 0xf8, 0x77,
    0x8e, 0x71, 0xcf, 0x38, 0xf7, 0xe,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+006D "m" */
    0xef, 0x1e, 0x7f, 0xdf, 0xbc, 0xf9, 0xfc, 0x38,
    0x7e, 0x1c, 0x3f, 0xe, 0x1f, 0x87, 0xf, 0xc3,
    0x87, 0xe1, 0xc3, 0xf0, 0xe1, 0xf8, 0x70, 0xfc,
    0x38, 0x70,

    /* U+006E "n" */
    0xef, 0x9f, 0xfb, 0xc7, 0xf0, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xfc, 0x1f, 0x83, 0xf0,
    0x70,

    /* U+006F "o" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xee, 0x38, 0xfe, 0xf,
    0x80,

    /* U+0070 "p" */
    0xef, 0x1f, 0xfb, 0xc7, 0x70, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xfe, 0x3b, 0xff, 0x77,
    0xce, 0x1, 0xc0, 0x38, 0x7, 0x0,

    /* U+0071 "q" */
    0x3e, 0xef, 0xfd, 0xc7, 0xf0, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xee, 0x3d, 0xff, 0x9f,
    0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,

    /* U+0072 "r" */
    0xef, 0xff, 0xc7, 0xe, 0x1c, 0x38, 0x70, 0xe1,
    0xc3, 0x87, 0x0,

    /* U+0073 "s" */
    0x3f, 0x1f, 0xee, 0x3f, 0x87, 0xf8, 0x1f, 0xc3,
    0xfc, 0x1f, 0xe1, 0xf8, 0x77, 0xf8, 0xfc,

    /* U+0074 "t" */
    0x38, 0x70, 0xe7, 0xff, 0xe7, 0xe, 0x1c, 0x38,
    0x70, 0xe1, 0xc3, 0x87, 0xc7, 0x80,

    /* U+0075 "u" */
    0xe0, 0xfc, 0x1f, 0x83, 0xf0, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xfe, 0x3d, 0xff, 0x9f,
    0x70,

    /* U+0076 "v" */
    0xf0, 0xe7, 0xe, 0x70, 0xe7, 0x1c, 0x39, 0xc3,
    0x9c, 0x39, 0x81, 0xb8, 0x1f, 0x81, 0xf0, 0xf,
    0x0, 0xf0,

    /* U+0077 "w" */
    0xe1, 0xc3, 0xb8, 0xf1, 0xdc, 0x78, 0xee, 0x7c,
    0xe7, 0x36, 0x71, 0x9b, 0x38, 0xed, 0xdc, 0x7e,
    0x6c, 0x3e, 0x3e, 0xf, 0x1f, 0x7, 0x8f, 0x83,
    0xc3, 0x80,

    /* U+0078 "x" */
    0x70, 0xef, 0x38, 0xe7, 0x1f, 0xc1, 0xf8, 0x1e,
    0x3, 0xc0, 0xfc, 0x3b, 0x87, 0x39, 0xc7, 0x38,
    0x70,

    /* U+0079 "y" */
    0xe0, 0xef, 0xe, 0x70, 0xe7, 0x1c, 0x71, 0xc3,
    0x9c, 0x39, 0x83, 0xb8, 0x1b, 0x81, 0xf0, 0x1f,
    0x0, 0xf0, 0xf, 0x1, 0xe0, 0x7c, 0x7, 0x80,

    /* U+007A "z" */
    0xff, 0xff, 0xc1, 0xc0, 0xe0, 0xe0, 0xf0, 0x70,
    0x70, 0x78, 0x38, 0x3f, 0xff, 0xf0,

    /* U+007B "{" */
    0x7, 0x87, 0xc7, 0x83, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x3c, 0x7c, 0x3e, 0x7, 0x81, 0xc0, 0xe0,
    0x70, 0x38, 0x1c, 0xe, 0x3, 0xe0, 0xf0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xf0, 0x7c, 0x7, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1e, 0x7, 0xc3, 0xe3, 0xc1, 0xc0, 0xe0,
    0x70, 0x38, 0x1c, 0x1e, 0x3e, 0x1e, 0x0,

    /* U+007E "~" */
    0x78, 0x1f, 0xc6, 0x3f, 0x81, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 70, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 111, .box_w = 3, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 160, .box_w = 7, .box_h = 6, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 13, .adv_w = 225, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 228, .box_w = 12, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 70, .adv_w = 313, .box_w = 18, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 247, .box_w = 16, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 95, .box_w = 3, .box_h = 6, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 141, .adv_w = 134, .box_w = 6, .box_h = 20, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 156, .adv_w = 134, .box_w = 6, .box_h = 20, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 171, .adv_w = 158, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 179, .adv_w = 228, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 196, .adv_w = 85, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 199, .adv_w = 155, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 201, .adv_w = 85, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 107, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 220, .adv_w = 231, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 169, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 212, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 222, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 228, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 220, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 230, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 201, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 228, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 230, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 85, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 85, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 459, .adv_w = 228, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 476, .adv_w = 228, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 487, .adv_w = 228, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 504, .adv_w = 188, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 312, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 567, .adv_w = 244, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 225, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 251, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 246, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 675, .adv_w = 202, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 193, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 256, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 745, .adv_w = 257, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 771, .adv_w = 93, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 196, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 230, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 823, .adv_w = 191, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 843, .adv_w = 303, .box_w = 16, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 875, .adv_w = 251, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 265, .box_w = 15, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 931, .adv_w = 217, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 955, .adv_w = 265, .box_w = 15, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 987, .adv_w = 225, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1011, .adv_w = 222, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1035, .adv_w = 212, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1059, .adv_w = 249, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1085, .adv_w = 239, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1115, .adv_w = 340, .box_w = 21, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1157, .adv_w = 241, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1187, .adv_w = 234, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1213, .adv_w = 222, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1237, .adv_w = 134, .box_w = 6, .box_h = 20, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1252, .adv_w = 107, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1270, .adv_w = 134, .box_w = 6, .box_h = 20, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1285, .adv_w = 228, .box_w = 12, .box_h = 7, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 1296, .adv_w = 203, .box_w = 13, .box_h = 2, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1300, .adv_w = 176, .box_w = 5, .box_h = 4, .ofs_x = 3, .ofs_y = 13},
    {.bitmap_index = 1303, .adv_w = 193, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1318, .adv_w = 210, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1340, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1357, .adv_w = 210, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1379, .adv_w = 195, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1396, .adv_w = 125, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1410, .adv_w = 209, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1432, .adv_w = 206, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1454, .adv_w = 85, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1460, .adv_w = 85, .box_w = 5, .box_h = 20, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 1473, .adv_w = 189, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1495, .adv_w = 85, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1501, .adv_w = 304, .box_w = 17, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1527, .adv_w = 203, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1544, .adv_w = 202, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1561, .adv_w = 209, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1583, .adv_w = 209, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1605, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1616, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1631, .adv_w = 125, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1645, .adv_w = 203, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1662, .adv_w = 186, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1680, .adv_w = 278, .box_w = 17, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1706, .adv_w = 186, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1723, .adv_w = 190, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1747, .adv_w = 178, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1761, .adv_w = 134, .box_w = 9, .box_h = 20, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1784, .adv_w = 85, .box_w = 3, .box_h = 20, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1792, .adv_w = 134, .box_w = 9, .box_h = 20, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1815, .adv_w = 228, .box_w = 11, .box_h = 4, .ofs_x = 1, .ofs_y = 4}
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
    0, 0, 3, -3, 0, 3, 0, -9,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    0, 0, -5, -5, 0, 0, 0, -3,
    0, -3, 0, -5, 0, -3, -3, 0,
    -5, -5, 0, -8, 0, 3, 4, -2,
    3, 0, -21, 0, -9, -8, 0, -16,
    0, -5, 0, 0, 0, -3, 0, 0,
    0, 0, 0, -3, -3, -3, -3, 0,
    0, 0, 0, 0, 3, -9, 0, 5,
    0, -10, 0, 0, 0, 0, 0, -11,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -21, 0, -9, 0,
    0, -7, 0, 0, 0, -5, -14, 0,
    -3, 3, -1, -7, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, 2, 0, 0, 0, 5, 3,
    1, 3, 3, 3, 0, 0, 0, 0,
    2, -2, 3, 12, 0, 0, 0, 0,
    0, 2, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -9, 0, 0,
    -2, -2, 0, 0, -2, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, -3, -1, -3, 0, 0,
    -6, 0, -3, -3, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, -3,
    -3, -1, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, -2,
    0, 0, 0, -1, -2, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, -3, 0, 0, -3,
    0, -4, -4, -4, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -2, -3, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, -3, -3,
    -3, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, -1, 0, -6, -6, -7, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 0, 0, 0,
    -33, 0, -3, 0, 0, 0, -19, 0,
    0, 0, 0, -3, -14, 0, 0, 0,
    0, -20, 0, -2, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, -7, 0, 0, 0, 0, -8, 0,
    -3, 0, 0, -2, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -15, 0, 0, 0,
    0, 0, 0, 0, 0, -11, 0, 0,
    0, 0, -21, 0, -12, -12, -16, -21,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, -6, -10,
    -5, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -14, 0, 0, -12, 0, 0,
    0, 0, -3, -5, -3, 0, 0, 0,
    -3, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, 0, 0, 0, -15, 0, -9, -9,
    -11, -15, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -18, -3,
    0, -22, -8, 0, 0, -5, -15, 0,
    -3, 0, -5, -5, -3, -3, 0, -11,
    -5, 0, -14, -3, 0, 0, -12, -3,
    -5, -34, -7, -31, -23, -3, -34, 0,
    -15, 0, -3, 0, -7, -3, 0, 0,
    0, -2, -12, -6, -16, -15, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, 0,
    -3, -3, -3, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -5, 0, 1,
    0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -9, 0,
    0, 0, 0, -8, 0, -3, -3, -10,
    -11, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 3,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, -18, -9, 0, 0, 0, 0,
    0, -1, -1, 0, 0, 0, 0, -3,
    0, -1, 0, -10, 0, 0, 0, 0,
    -14, 0, -9, -9, -15, -15, -2, -5,
    -7, -1, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -2, -3, 0,
    0, -1, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, -10, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    -5, -3, 0, 0, 0, -17, 0, 0,
    -21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -27, -8, 0, -5, 0, 0,
    0, 0, -4, 0, 0, -3, -3, -5,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, -7, 0, 0, 0, 0, -1,
    0, -2, -2, -3, -5, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, -12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, -3, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -5, 0, -11, -20,
    0, 0, -14, -10, 0, -9, -8, -8,
    0, -8, -9, 0, -20, -8, 0, -3,
    -5, 0, 0, -10, -3, -2, 0, -1,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, -12, 0, 0, 0, 0, -5, -5,
    -3, -9, -9, 0, 0, 0, 0, 0,
    -24, -2, 0, -26, -11, 0, 0, -4,
    -16, 0, -1, 0, -3, -3, 0, 0,
    0, -17, -3, 0, -10, 0, 0, 0,
    -10, 0, 0, -32, -8, -21, -20, 0,
    -40, 0, -10, 0, 0, 0, -3, -2,
    0, 0, 0, 0, -11, 0, -17, -15,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, -3, -21, -17, 0, 0, 0, 0,
    -3, -2, 0, 0, 0, 0, -3, -3,
    0, 0, 0, -23, 0, 0, -25, 0,
    0, 0, -3, -3, -5, -9, -3, 0,
    -34, -12, 0, -6, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    -3, 0, -13, 0, 0, 0, -5, 0,
    -2, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, -7, 0, -3, -3, -5, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -12, 0, -5,
    -18, -25, -10, -9, 0, 0, 0, -15,
    -1, 0, -3, -1, -15, -21, -15, 0,
    0, -15, -34, 0, -14, -21, 0, 0,
    0, 0, 0, 0, 0, 0, 5, -21,
    -42, 0, -40, 0, -8, -4, -23, -34,
    0, -23, -21, -17, -22, -21, 0, 0,
    0, 0, -8, 0, -3, -10, -26, -22,
    -8, -2, -2, -3, -13, -3, 0, -6,
    -6, -3, -12, -5, 0, 0, -9, -31,
    0, -3, -20, -4, 0, 0, 0, 0,
    0, 0, 0, 3, -24, -24, 0, -24,
    -2, -3, 0, -9, -20, -3, -12, -3,
    -3, -3, -8, 0, 0, 0, 0, -9,
    0, -3, -10, -20, -21, -5, -2, -2,
    -3, -10, -3, 0, -6, -6, -3, -12,
    -14, 0, -3, -9, -23, 0, -9, -15,
    -3, 0, 0, 0, 0, 0, 0, 0,
    3, -20, -23, 0, -21, 0, 0, 0,
    -7, -17, -2, -8, -3, -1, -1, -5,
    0, 0, 0, 0, 0, 0, -8, -15,
    0, 0, -9, -3, 0, -5, -5, -5,
    0, -7, -4, 0, -16, -10, 0, -5,
    -11, -3, 0, -13, -3, -5, 0, 0,
    0, 0, 0, 0, 0, 3, 0, -8,
    0, -14, 0, 0, 0, 0, -8, -3,
    -5, -9, -9, 0, 0, 0, 0, 0,
    0, -15, 0, -8, -21, -31, -22, -14,
    0, -5, -6, -16, -2, 0, -7, -7,
    -5, -21, -17, 0, -3, -15, -34, 0,
    -22, -21, -15, 0, 0, 0, 0, 0,
    0, 0, 3, -24, -37, -4, -38, -5,
    -5, -3, -18, -35, -3, -23, -13, -13,
    -12, -18, 0, 0, 0, 0, 0, 0,
    -5, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, -3,
    0, 0, -2, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, -21, -14, -22,
    -21, -3, -19, 0, 0, 0, 0, 2,
    -3, -3, 10, 0, 0, 0, 0, 0,
    -13, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, -21, 0, -24, -20, 0, -24,
    0, 0, -5, -3, 0, -10, 0, 0,
    29, 0, -3, 0, 0, 7, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, -2, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, -36,
    0, -21, -19, 0, -34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, -5, -3,
    0, -3, -3, 0, 0, 0, -6, 0,
    0, 0, -2, -2, -5, 0, 0, -7,
    0, 0, 0, 0, -39, 0, -24, -21,
    -14, -38, -2, -2, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    -2, -13, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, -2, 0,
    0, 0, 0, -2, 0, 0, 0, -3,
    -2, 0, 0, 0, -3, 0, 0, 0,
    0, -19, 0, -15, -14, -10, -25, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, -2, 0, 0,
    0, 0, -2, 0, -3, 0, -4, 0,
    0, 0, 0, -40, 0, -21, -15, -10,
    -24, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, -1,
    -3, 0, 0, 0, 0, 0, -3, 0,
    0, -3, -9, -3, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, -10, -8,
    0, 0, -8, -13, 0, 0, -9, -1,
    0, 0, 0, 0, 0, 0, 0, 3,
    0, -9, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -13, 0, -9,
    -8, 0, -15, 0, -2, 3, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, -3, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -9, 0, 2, 0, -3, 0, -3, -5,
    -3, 0, 0, 0, 0, -20, -9, 0,
    0, 0, 0, 0, -6, -4, -2, -6,
    0, 0, 0, 0, -9, 0, 2, 0,
    -1, 0, -9, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -19, -5,
    0, 0, 0, 0, -3, 0, -3, 0,
    0, 0, -4, -3, 0, 0, 0, -5,
    0, 0, -9, 0, -15, 0, -1, -1,
    -2, -3, 0, 2, 0, -4, 0, -6,
    1, 0, 0, 0, 0, 7, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    -3, 0, 0, 0, -2, 0, 0, 1,
    0, -34, 0, -19, -16, -8, -35, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, -1, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, -1, -3, -2,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    -3, -2, -1, -10, 0, 0, 0, -2,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -22, 0, -12, -8, 0,
    -21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0,
    0, -3, -23, -12, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, -8, -3,
    0, 0, 0, -16, 0, 0, -11, 0,
    -21, 0, -3, -3, -9, -13, 0, 2,
    -21, -4, 0, -6, 0, 0, 0, 0,
    -1, 0, 0, 3, 3, 3, 0, 0,
    0, 0, 3, 0, 0, 0, -3, -21,
    -9, 0, 0, 0, 0, -2, -2, 0,
    -2, 0, 0, -8, -3, 0, 0, 0,
    -15, 0, 0, -8, 0, -17, 0, -3,
    -1, -9, -13, 0, 3, 0, -6, 0,
    -3, 0, 0, 0, 0, -1, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, -2, -4, 0, -2, -2, 0, 0,
    -10, -7, 0, 0, 0, 0, 0, -5,
    -3, 0, -22, 0, -3, -1, 0, -12,
    0, 0, 0, -3, 0, -5, 0, 0,
    0, 0, -1, 0, 0, 3, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, -3,
    0, -3, 0, 0, 0, -5, -3, 0,
    0, 0, 0, 0, -2, 0, -2, -21,
    0, -8, -5, 0, -18, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0
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
const lv_font_t ui_font_SF_PRO_bold_22 = {
#else
lv_font_t ui_font_SF_PRO_bold_22 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 21,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_SF_PRO_BOLD_22*/

