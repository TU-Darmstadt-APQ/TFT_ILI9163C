
/*******************************************************************************

* name: newFont
* family: Terminal
* size: 7
* style: Normal
* --------------------------------------
* included characters:  !"#$%&'()*+,-./0123456789:;<=>?\x0040ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~
* --------------------------------------
* antialiasing: no
* type: monospaced
* encoding: latin1
* unicode bom: no
*
* data block size: 8 bit(s), uint8_t
* RLE compression enabled: no
* conversion type: Monochrome, Edge 120
* bits per pixel: 1
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: yes
* ------------------------------------------------------------------------------
* Created by a custom template of LCD-Image-Converter for .s.u.m.o.t.o.y.
* Font template version: 2.4
* Note: Font height should be fixed and all glyps must have the same height!
* ------------------------------------------------------------------------------
*******************************************************************************/

#if !defined(SUMO_FNT_LIB_newFont)
#define SUMO_FNT_LIB_newFont

#include <stdint.h>
#include "../_includes/TFT_ILI9163C_cpuCommons.h"
#include "../_includes/sumotoy_fontDescription.h"
#include "../_includes/sumotoy_imageDescription.h"
#include "../_includes/sumotoy_iconDescription.h"



const _smCharType image_data_newFont_0x20[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };//character: ' '

const tImage newFont_0x20 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x20, 6, 6};//character: ' ' (charW,total bytes)

const _smCharType image_data_newFont_0x21[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x10, 0xe3, 0x84, 0x10, 0x01, 0x00 };//character: '!'

const tImage newFont_0x21 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x21, 6, 6};//character: '!' (charW,total bytes)

const _smCharType image_data_newFont_0x22[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x6d, 0xb4, 0x80, 0x00, 0x00, 0x00 };//character: '"'

const tImage newFont_0x22 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x22, 6, 6};//character: '"' (charW,total bytes)

const _smCharType image_data_newFont_0x23[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0xa7, 0xca, 0x29, 0xf2, 0x80 };//character: '#'

const tImage newFont_0x23 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x23, 6, 6};//character: '#' (charW,total bytes)

const _smCharType image_data_newFont_0x24[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x20, 0xe4, 0x0c, 0x09, 0xc1, 0x00 };//character: '$'

const tImage newFont_0x24 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x24, 6, 6};//character: '$' (charW,total bytes)

const _smCharType image_data_newFont_0x25[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x65, 0x90, 0x84, 0x21, 0x34, 0xc0 };//character: '%'

const tImage newFont_0x25 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x25, 6, 6};//character: '%' (charW,total bytes)

const _smCharType image_data_newFont_0x26[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x21, 0x45, 0x08, 0x55, 0x23, 0x40 };//character: '&'

const tImage newFont_0x26 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x26, 6, 6};//character: '&' (charW,total bytes)

const _smCharType image_data_newFont_0x27[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x30, 0xc2, 0x00, 0x00, 0x00, 0x00 };//character: '''

const tImage newFont_0x27 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x27, 6, 6};//character: ''' (charW,total bytes)

const _smCharType image_data_newFont_0x28[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x10, 0x82, 0x08, 0x20, 0x81, 0x00 };//character: '('

const tImage newFont_0x28 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x28, 6, 6};//character: '(' (charW,total bytes)

const _smCharType image_data_newFont_0x29[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x20, 0x41, 0x04, 0x10, 0x42, 0x00 };//character: ')'

const tImage newFont_0x29 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x29, 6, 6};//character: ')' (charW,total bytes)

const _smCharType image_data_newFont_0x2a[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0xa3, 0x9f, 0x38, 0xa0, 0x00 };//character: '*'

const tImage newFont_0x2a 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x2a, 6, 6};//character: '*' (charW,total bytes)

const _smCharType image_data_newFont_0x2b[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x41, 0x1f, 0x10, 0x40, 0x00 };//character: '+'

const tImage newFont_0x2b 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x2b, 6, 6};//character: '+' (charW,total bytes)

const _smCharType image_data_newFont_0x2c[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x00, 0x00, 0x00, 0xc3, 0x08 };//character: ','

const tImage newFont_0x2c 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x2c, 6, 6};//character: ',' (charW,total bytes)

const _smCharType image_data_newFont_0x2d[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00 };//character: '-'

const tImage newFont_0x2d 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x2d, 6, 6};//character: '-' (charW,total bytes)

const _smCharType image_data_newFont_0x2e[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x00, 0x00, 0x00, 0xc3, 0x00 };//character: '.'

const tImage newFont_0x2e 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x2e, 6, 6};//character: '.' (charW,total bytes)

const _smCharType image_data_newFont_0x2f[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x10, 0x84, 0x21, 0x00, 0x00 };//character: '/'

const tImage newFont_0x2f 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x2f, 6, 6};//character: '/' (charW,total bytes)

const _smCharType image_data_newFont_0x30[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x14, 0xd5, 0x65, 0x13, 0x80 };//character: '0'

const tImage newFont_0x30 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x30, 6, 6};//character: '0' (charW,total bytes)

const _smCharType image_data_newFont_0x31[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x10, 0xc1, 0x04, 0x10, 0x43, 0x80 };//character: '1'

const tImage newFont_0x31 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x31, 6, 6};//character: '1' (charW,total bytes)

const _smCharType image_data_newFont_0x32[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x10, 0x46, 0x21, 0x07, 0xc0 };//character: '2'

const tImage newFont_0x32 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x32, 6, 6};//character: '2' (charW,total bytes)

const _smCharType image_data_newFont_0x33[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x10, 0x4e, 0x05, 0x13, 0x80 };//character: '3'

const tImage newFont_0x33 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x33, 6, 6};//character: '3' (charW,total bytes)

const _smCharType image_data_newFont_0x34[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x08, 0x62, 0x92, 0x7c, 0x20, 0x80 };//character: '4'

const tImage newFont_0x34 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x34, 6, 6};//character: '4' (charW,total bytes)

const _smCharType image_data_newFont_0x35[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x7d, 0x04, 0x1e, 0x05, 0x13, 0x80 };//character: '5'

const tImage newFont_0x35 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x35, 6, 6};//character: '5' (charW,total bytes)

const _smCharType image_data_newFont_0x36[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x18, 0x84, 0x1e, 0x45, 0x13, 0x80 };//character: '6'

const tImage newFont_0x36 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x36, 6, 6};//character: '6' (charW,total bytes)

const _smCharType image_data_newFont_0x37[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x7c, 0x10, 0x84, 0x20, 0x82, 0x00 };//character: '7'

const tImage newFont_0x37 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x37, 6, 6};//character: '7' (charW,total bytes)

const _smCharType image_data_newFont_0x38[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x14, 0x4e, 0x45, 0x13, 0x80 };//character: '8'

const tImage newFont_0x38 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x38, 6, 6};//character: '8' (charW,total bytes)

const _smCharType image_data_newFont_0x39[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x14, 0x4f, 0x04, 0x23, 0x00 };//character: '9'

const tImage newFont_0x39 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x39, 6, 6};//character: '9' (charW,total bytes)

const _smCharType image_data_newFont_0x3a[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0xC3, 0x00, 0x00, 0xc3, 0x00 };//character: ':'

const tImage newFont_0x3a 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x3a, 6, 6};//character: ':' (charW,total bytes)

const _smCharType image_data_newFont_0x3b[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x03, 0x0c, 0x00, 0xc3, 0x08 };//character: ';'

const tImage newFont_0x3b 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x3b, 6, 6};//character: ';' (charW,total bytes)

const _smCharType image_data_newFont_0x3c[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x08, 0x42, 0x10, 0x20, 0x40, 0x80 };//character: '<'

const tImage newFont_0x3c 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x3c, 6, 6};//character: '<' (charW,total bytes)

const _smCharType image_data_newFont_0x3d[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x07, 0xc0, 0x01, 0xf0, 0x00 };//character: '='

const tImage newFont_0x3d 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x3d, 6, 6};//character: '=' (charW,total bytes)

const _smCharType image_data_newFont_0x3e[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x20, 0x40, 0x81, 0x08, 0x42, 0x00 };//character: '>'

const tImage newFont_0x3e 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x3e, 6, 6};//character: '>' (charW,total bytes)

const _smCharType image_data_newFont_0x3f[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x10, 0x46, 0x10, 0x01, 0x00 };//character: '?'

const tImage newFont_0x3f 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x3f, 6, 6};//character: '?' (charW,total bytes)

const _smCharType image_data_newFont_0x40[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x15, 0xd5, 0x5d, 0x03, 0x80 };//character: '\x0040'

const tImage newFont_0x40 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x40, 6, 6};//character: '\x0040' (charW,total bytes)

const _smCharType image_data_newFont_0x41[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x14, 0x51, 0x7d, 0x14, 0x40 };//character: 'A'

const tImage newFont_0x41 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x41, 6, 6};//character: 'A' (charW,total bytes)

const _smCharType image_data_newFont_0x42[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x79, 0x14, 0x5e, 0x45, 0x17, 0x80 };//character: 'B'

const tImage newFont_0x42 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x42, 6, 6};//character: 'B' (charW,total bytes)

const _smCharType image_data_newFont_0x43[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x14, 0x10, 0x41, 0x13, 0x80 };//character: 'C'

const tImage newFont_0x43 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x43, 6, 6};//character: 'C' (charW,total bytes)

const _smCharType image_data_newFont_0x44[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x79, 0x14, 0x51, 0x45, 0x17, 0x80 };//character: 'D'

const tImage newFont_0x44 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x44, 6, 6};//character: 'D' (charW,total bytes)

const _smCharType image_data_newFont_0x45[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x7d, 0x04, 0x1e, 0x41, 0x07, 0xc0 };//character: 'E'

const tImage newFont_0x45 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x45, 6, 6};//character: 'E' (charW,total bytes)

const _smCharType image_data_newFont_0x46[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x7d, 0x04, 0x1e, 0x41, 0x04, 0x00 };//character: 'F'

const tImage newFont_0x46 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x46, 6, 6};//character: 'F' (charW,total bytes)

const _smCharType image_data_newFont_0x47[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x14, 0x17, 0x45, 0x13, 0xc0 };//character: 'G'

const tImage newFont_0x47 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x47, 6, 6};//character: 'G' (charW,total bytes)

const _smCharType image_data_newFont_0x48[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x45, 0x14, 0x5f, 0x45, 0x14, 0x40 };//character: 'H'

const tImage newFont_0x48 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x48, 6, 6};//character: 'H' (charW,total bytes)

const _smCharType image_data_newFont_0x49[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x38, 0x41, 0x04, 0x10, 0x43, 0x80 };//character: 'I'

const tImage newFont_0x49 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x49, 6, 6};//character: 'I' (charW,total bytes)

const _smCharType image_data_newFont_0x4a[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x04, 0x10, 0x41, 0x45, 0x13, 0x80 };//character: 'J'

const tImage newFont_0x4a 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x4a, 6, 6};//character: 'J' (charW,total bytes)

const _smCharType image_data_newFont_0x4b[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x45, 0x25, 0x18, 0x51, 0x24, 0x40 };//character: 'K'

const tImage newFont_0x4b 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x4b, 6, 6};//character: 'K' (charW,total bytes)

const _smCharType image_data_newFont_0x4c[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x41, 0x04, 0x10, 0x41, 0x07, 0xc0 };//character: 'L'

const tImage newFont_0x4c 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x4c, 6, 6};//character: 'L' (charW,total bytes)

const _smCharType image_data_newFont_0x4d[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x45, 0xb5, 0x51, 0x45, 0x14, 0x40 };//character: 'M'

const tImage newFont_0x4d 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x4d, 6, 6};//character: 'M' (charW,total bytes)

const _smCharType image_data_newFont_0x4e[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x45, 0x95, 0x53, 0x45, 0x14, 0x40 };//character: 'N'

const tImage newFont_0x4e 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x4e, 6, 6};//character: 'N' (charW,total bytes)

const _smCharType image_data_newFont_0x4f[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x14, 0x51, 0x45, 0x13, 0x80 };//character: 'O'

const tImage newFont_0x4f 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x4f, 6, 6};//character: 'O' (charW,total bytes)

const _smCharType image_data_newFont_0x50[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x79, 0x14, 0x5e, 0x41, 0x04, 0x00 };//character: 'P'

const tImage newFont_0x50 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x50, 6, 6};//character: 'P' (charW,total bytes)

const _smCharType image_data_newFont_0x51[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x14, 0x51, 0x55, 0x23, 0x40 };//character: 'Q'

const tImage newFont_0x51 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x51, 6, 6};//character: 'Q' (charW,total bytes)

const _smCharType image_data_newFont_0x52[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x79, 0x14, 0x5e, 0x49, 0x14, 0x40 };//character: 'R'

const tImage newFont_0x52 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x52, 6, 6};//character: 'R' (charW,total bytes)

const _smCharType image_data_newFont_0x53[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x39, 0x14, 0x0e, 0x05, 0x13, 0x80 };//character: 'S'

const tImage newFont_0x53 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x53, 6, 6};//character: 'S' (charW,total bytes)

const _smCharType image_data_newFont_0x54[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x7c, 0x41, 0x04, 0x10, 0x41, 0x00 };//character: 'T'

const tImage newFont_0x54 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x54, 6, 6};//character: 'T' (charW,total bytes)

const _smCharType image_data_newFont_0x55[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x45, 0x14, 0x51, 0x45, 0x13, 0x80 };//character: 'U'

const tImage newFont_0x55 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x55, 6, 6};//character: 'U' (charW,total bytes)

const _smCharType image_data_newFont_0x56[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x45, 0x14, 0x51, 0x44, 0xa1, 0x00 };//character: 'V'

const tImage newFont_0x56 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x56, 6, 6};//character: 'V' (charW,total bytes)

const _smCharType image_data_newFont_0x57[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x45, 0x15, 0x55, 0x55, 0x52, 0x80 };//character: 'W'

const tImage newFont_0x57 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x57, 6, 6};//character: 'W' (charW,total bytes)

const _smCharType image_data_newFont_0x58[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x45, 0x12, 0x84, 0x29, 0x14, 0x40 };//character: 'X'

const tImage newFont_0x58 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x58, 6, 6};//character: 'X' (charW,total bytes)

const _smCharType image_data_newFont_0x59[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x45, 0x14, 0x4a, 0x10, 0x41, 0x00 };//character: 'Y'

const tImage newFont_0x59 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x59, 6, 6};//character: 'Y' (charW,total bytes)

const _smCharType image_data_newFont_0x5a[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x78, 0x21, 0x08, 0x41, 0x07, 0x80 };//character: 'Z'

const tImage newFont_0x5a 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x5a, 6, 6};//character: 'Z' (charW,total bytes)

const _smCharType image_data_newFont_0x5b[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x38, 0x82, 0x08, 0x20, 0x83, 0x80 };//character: '['

const tImage newFont_0x5b 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x5b, 6, 6};//character: '[' (charW,total bytes)

const _smCharType image_data_newFont_0x5c[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x01, 0x02, 0x04, 0x08, 0x10, 0x00 };//character: '\'

const tImage newFont_0x5c 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x5c, 6, 6};//character: '\' (charW,total bytes)

const _smCharType image_data_newFont_0x5d[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x38, 0x20, 0x82, 0x08, 0x23, 0x80 };//character: ']'

const tImage newFont_0x5d 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x5d, 6, 6};//character: ']' (charW,total bytes)

const _smCharType image_data_newFont_0x5e[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x10, 0xa4, 0x40, 0x00, 0x00, 0x00 };//character: '^'

const tImage newFont_0x5e 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x5e, 6, 6};//character: '^' (charW,total bytes)

const _smCharType image_data_newFont_0x5f[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f };//character: '_'

const tImage newFont_0x5f 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x5f, 6, 6};//character: '_' (charW,total bytes)

const _smCharType image_data_newFont_0x60[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x30, 0xc1, 0x00, 0x00, 0x00, 0x00 };//character: '`'

const tImage newFont_0x60 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x60, 6, 6};//character: '`' (charW,total bytes)

const _smCharType image_data_newFont_0x61[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x03, 0x81, 0x3d, 0x13, 0xc0 };//character: 'a'

const tImage newFont_0x61 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x61, 6, 6};//character: 'a' (charW,total bytes)

const _smCharType image_data_newFont_0x62[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x41, 0x07, 0x91, 0x45, 0x17, 0x80 };//character: 'b'

const tImage newFont_0x62 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x62, 6, 6};//character: 'b' (charW,total bytes)

const _smCharType image_data_newFont_0x63[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x03, 0x91, 0x41, 0x13, 0x80 };//character: 'c'

const tImage newFont_0x63 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x63, 6, 6};//character: 'c' (charW,total bytes)

const _smCharType image_data_newFont_0x64[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x04, 0x13, 0xd1, 0x45, 0x13, 0xc0 };//character: 'd'

const tImage newFont_0x64 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x64, 6, 6};//character: 'd' (charW,total bytes)

const _smCharType image_data_newFont_0x65[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x03, 0x91, 0x79, 0x03, 0x80 };//character: 'e'

const tImage newFont_0x65 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x65, 6, 6};//character: 'e' (charW,total bytes)

const _smCharType image_data_newFont_0x66[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x18, 0x82, 0x1e, 0x20, 0x82, 0x00 };//character: 'f'

const tImage newFont_0x66 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x66, 6, 6};//character: 'f' (charW,total bytes)

const _smCharType image_data_newFont_0x67[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x03, 0xd1, 0x44, 0xf0, 0x4e };//character: 'g'

const tImage newFont_0x67 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x67, 6, 6};//character: 'g' (charW,total bytes)

const _smCharType image_data_newFont_0x68[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x41, 0x07, 0x12, 0x49, 0x24, 0x80 };//character: 'h'

const tImage newFont_0x68 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x68, 6, 6};//character: 'h' (charW,total bytes)

const _smCharType image_data_newFont_0x69[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x10, 0x01, 0x04, 0x10, 0x41, 0x80 };//character: 'i'

const tImage newFont_0x69 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x69, 6, 6};//character: 'i' (charW,total bytes)

const _smCharType image_data_newFont_0x6a[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x08, 0x01, 0x82, 0x08, 0x24, 0x8c };//character: 'j'

const tImage newFont_0x6a 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x6a, 6, 6};//character: 'j' (charW,total bytes)

const _smCharType image_data_newFont_0x6b[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x41, 0x04, 0x94, 0x61, 0x44, 0x80 };//character: 'k'

const tImage newFont_0x6b 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x6b, 6, 6};//character: 'k' (charW,total bytes)

const _smCharType image_data_newFont_0x6c[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x10, 0x41, 0x04, 0x10, 0x41, 0x80 };//character: 'l'

const tImage newFont_0x6c 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x6c, 6, 6};//character: 'l' (charW,total bytes)

const _smCharType image_data_newFont_0x6d[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x06, 0x95, 0x55, 0x14, 0x40 };//character: 'm'

const tImage newFont_0x6d 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x6d, 6, 6};//character: 'm' (charW,total bytes)

const _smCharType image_data_newFont_0x6e[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x07, 0x12, 0x49, 0x24, 0x80 };//character: 'n'

const tImage newFont_0x6e 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x6e, 6, 6};//character: 'n' (charW,total bytes)

const _smCharType image_data_newFont_0x6f[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x03, 0x91, 0x45, 0x13, 0x80 };//character: 'o'

const tImage newFont_0x6f 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x6f, 6, 6};//character: 'o' (charW,total bytes)

const _smCharType image_data_newFont_0x70[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x07, 0x91, 0x45, 0x17, 0x90 };//character: 'p'

const tImage newFont_0x70 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x70, 6, 6};//character: 'p' (charW,total bytes)

const _smCharType image_data_newFont_0x71[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x03, 0xd1, 0x45, 0x13, 0xc1 };//character: 'q'

const tImage newFont_0x71 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x71, 6, 6};//character: 'q' (charW,total bytes)

const _smCharType image_data_newFont_0x72[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x05, 0x89, 0x20, 0x87, 0x00 };//character: 'r'

const tImage newFont_0x72 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x72, 6, 6};//character: 'r' (charW,total bytes)

const _smCharType image_data_newFont_0x73[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x03, 0x90, 0x38, 0x13, 0x80 };//character: 's'

const tImage newFont_0x73 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x73, 6, 6};//character: 's' (charW,total bytes)

const _smCharType image_data_newFont_0x74[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x87, 0x88, 0x20, 0xa1, 0x00 };//character: 't'

const tImage newFont_0x74 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x74, 6, 6};//character: 't' (charW,total bytes)

const _smCharType image_data_newFont_0x75[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x04, 0x92, 0x49, 0x62, 0x80 };//character: 'u'

const tImage newFont_0x75 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x75, 6, 6};//character: 'u' (charW,total bytes)

const _smCharType image_data_newFont_0x76[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x04, 0x51, 0x44, 0xa1, 0x00 };//character: 'v'

const tImage newFont_0x76 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x76, 6, 6};//character: 'v' (charW,total bytes)

const _smCharType image_data_newFont_0x77[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x04, 0x51, 0x55, 0xf2, 0x80 };//character: 'w'

const tImage newFont_0x77 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x77, 6, 6};//character: 'w' (charW,total bytes)

const _smCharType image_data_newFont_0x78[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x04, 0x92, 0x31, 0x24, 0x80 };//character: 'x'

const tImage newFont_0x78 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x78, 6, 6};//character: 'x' (charW,total bytes)

const _smCharType image_data_newFont_0x79[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x04, 0x92, 0x48, 0xe1, 0x18 };//character: 'y'

const tImage newFont_0x79 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x79, 6, 6};//character: 'y' (charW,total bytes)

const _smCharType image_data_newFont_0x7a[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0x07, 0x82, 0x31, 0x07, 0x80 };//character: 'z'

const tImage newFont_0x7a 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x7a, 6, 6};//character: 'z' (charW,total bytes)

const _smCharType image_data_newFont_0x7b[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x18, 0x82, 0x18, 0x20, 0x81, 0x80 };//character: '{'

const tImage newFont_0x7b 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x7b, 6, 6};//character: '{' (charW,total bytes)

const _smCharType image_data_newFont_0x7c[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x10, 0x41, 0x00, 0x10, 0x41, 0x00 };//character: '|'

const tImage newFont_0x7c 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x7c, 6, 6};//character: '|' (charW,total bytes)

const _smCharType image_data_newFont_0x7d[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x30, 0x20, 0x83, 0x08, 0x23, 0x00 };//character: '}'

const tImage newFont_0x7d 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x7d, 6, 6};//character: '}' (charW,total bytes)

const _smCharType image_data_newFont_0x7e[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x29, 0x40, 0x00, 0x00, 0x00, 0x00 };//character: '~'

const tImage newFont_0x7e 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0x7e, 6, 6};//character: '~' (charW,total bytes)

const _smCharType image_data_newFont_0xb0[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x18, 0x92, 0x46, 0x00, 0x00, 0x00 };//character: '°'

const tImage newFont_0xb0 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0xb0, 6, 6};//character: '°' (charW,total bytes)

const _smCharType image_data_newFont_0xb1[6] 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif  
= { 0x00, 0xE4, 0x51, 0x44, 0xA6, 0xC0 };//character: 'omega'

const tImage newFont_0xb1 
#if defined(_FORCE_PROGMEM__) 
PROGMEM 
#endif 
= { image_data_newFont_0xb1, 6, 6};//character: 'omega' (charW,total bytes)


const tChar newFont_array[] = {

  // character: ' '
  {0x20, &newFont_0x20},
  // character: '!'
  {0x21, &newFont_0x21},
  // character: '"'
  {0x22, &newFont_0x22},
  // character: '#'
  {0x23, &newFont_0x23},
  // character: '$'
  {0x24, &newFont_0x24},
  // character: '%'
  {0x25, &newFont_0x25},
  // character: '&'
  {0x26, &newFont_0x26},
  // character: '''
  {0x27, &newFont_0x27},
  // character: '('
  {0x28, &newFont_0x28},
  // character: ')'
  {0x29, &newFont_0x29},
  // character: '*'
  {0x2a, &newFont_0x2a},
  // character: '+'
  {0x2b, &newFont_0x2b},
  // character: ','
  {0x2c, &newFont_0x2c},
  // character: '-'
  {0x2d, &newFont_0x2d},
  // character: '.'
  {0x2e, &newFont_0x2e},
  // character: '/'
  {0x2f, &newFont_0x2f},
  // character: '0'
  {0x30, &newFont_0x30},
  // character: '1'
  {0x31, &newFont_0x31},
  // character: '2'
  {0x32, &newFont_0x32},
  // character: '3'
  {0x33, &newFont_0x33},
  // character: '4'
  {0x34, &newFont_0x34},
  // character: '5'
  {0x35, &newFont_0x35},
  // character: '6'
  {0x36, &newFont_0x36},
  // character: '7'
  {0x37, &newFont_0x37},
  // character: '8'
  {0x38, &newFont_0x38},
  // character: '9'
  {0x39, &newFont_0x39},
  // character: ':'
  {0x3a, &newFont_0x3a},
  // character: ';'
  {0x3b, &newFont_0x3b},
  // character: '<'
  {0x3c, &newFont_0x3c},
  // character: '='
  {0x3d, &newFont_0x3d},
  // character: '>'
  {0x3e, &newFont_0x3e},
  // character: '?'
  {0x3f, &newFont_0x3f},
  // character: '\x0040'
  {0x40, &newFont_0x40},
  // character: 'A'
  {0x41, &newFont_0x41},
  // character: 'B'
  {0x42, &newFont_0x42},
  // character: 'C'
  {0x43, &newFont_0x43},
  // character: 'D'
  {0x44, &newFont_0x44},
  // character: 'E'
  {0x45, &newFont_0x45},
  // character: 'F'
  {0x46, &newFont_0x46},
  // character: 'G'
  {0x47, &newFont_0x47},
  // character: 'H'
  {0x48, &newFont_0x48},
  // character: 'I'
  {0x49, &newFont_0x49},
  // character: 'J'
  {0x4a, &newFont_0x4a},
  // character: 'K'
  {0x4b, &newFont_0x4b},
  // character: 'L'
  {0x4c, &newFont_0x4c},
  // character: 'M'
  {0x4d, &newFont_0x4d},
  // character: 'N'
  {0x4e, &newFont_0x4e},
  // character: 'O'
  {0x4f, &newFont_0x4f},
  // character: 'P'
  {0x50, &newFont_0x50},
  // character: 'Q'
  {0x51, &newFont_0x51},
  // character: 'R'
  {0x52, &newFont_0x52},
  // character: 'S'
  {0x53, &newFont_0x53},
  // character: 'T'
  {0x54, &newFont_0x54},
  // character: 'U'
  {0x55, &newFont_0x55},
  // character: 'V'
  {0x56, &newFont_0x56},
  // character: 'W'
  {0x57, &newFont_0x57},
  // character: 'X'
  {0x58, &newFont_0x58},
  // character: 'Y'
  {0x59, &newFont_0x59},
  // character: 'Z'
  {0x5a, &newFont_0x5a},
  // character: '['
  {0x5b, &newFont_0x5b},
  // character: '\'
  {0x5c, &newFont_0x5c},
  // character: ']'
  {0x5d, &newFont_0x5d},
  // character: '^'
  {0x5e, &newFont_0x5e},
  // character: '_'
  {0x5f, &newFont_0x5f},
  // character: '`'
  {0x60, &newFont_0x60},
  // character: 'a'
  {0x61, &newFont_0x61},
  // character: 'b'
  {0x62, &newFont_0x62},
  // character: 'c'
  {0x63, &newFont_0x63},
  // character: 'd'
  {0x64, &newFont_0x64},
  // character: 'e'
  {0x65, &newFont_0x65},
  // character: 'f'
  {0x66, &newFont_0x66},
  // character: 'g'
  {0x67, &newFont_0x67},
  // character: 'h'
  {0x68, &newFont_0x68},
  // character: 'i'
  {0x69, &newFont_0x69},
  // character: 'j'
  {0x6a, &newFont_0x6a},
  // character: 'k'
  {0x6b, &newFont_0x6b},
  // character: 'l'
  {0x6c, &newFont_0x6c},
  // character: 'm'
  {0x6d, &newFont_0x6d},
  // character: 'n'
  {0x6e, &newFont_0x6e},
  // character: 'o'
  {0x6f, &newFont_0x6f},
  // character: 'p'
  {0x70, &newFont_0x70},
  // character: 'q'
  {0x71, &newFont_0x71},
  // character: 'r'
  {0x72, &newFont_0x72},
  // character: 's'
  {0x73, &newFont_0x73},
  // character: 't'
  {0x74, &newFont_0x74},
  // character: 'u'
  {0x75, &newFont_0x75},
  // character: 'v'
  {0x76, &newFont_0x76},
  // character: 'w'
  {0x77, &newFont_0x77},
  // character: 'x'
  {0x78, &newFont_0x78},
  // character: 'y'
  {0x79, &newFont_0x79},
  // character: 'z'
  {0x7a, &newFont_0x7a},
  // character: '{'
  {0x7b, &newFont_0x7b},
  // character: '|'
  {0x7c, &newFont_0x7c},
  // character: '}'
  {0x7d, &newFont_0x7d},
  // character: '~'
  {0x7e, &newFont_0x7e},
  // character: '°'
  {0xb0, &newFont_0xb0},
    // character: 'omega'
  {0xb1, &newFont_0xb1}
};

//num chars, array, width, height, descent, compression, char remap code
/*
	char remap code:
	0:no remap
	1:remap minus to CAPITAL
	2:remap CAPITAL to minus
*/

const tFont newFont = { 97, newFont_array, RLE_monospaced, 8, 0, RLE_no, 0 };


#endif
