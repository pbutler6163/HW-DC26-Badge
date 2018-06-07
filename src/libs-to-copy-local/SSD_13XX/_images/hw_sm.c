
/*******************************************************************************
* name: hw_sm
*
* preset name: sumotoy_image
* data block size: 16 bit(s), uint16_t
* RLE compression enabled: no
* conversion type: Color, not_used not_used
* bits per pixel: 16
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: no
* ------------------------------------------------------------------------------
* Created by a custom template of LCD-Image-Converter for .s.u.m.o.t.o.y.
* Image template version: 1.3
* Note: 
* ------------------------------------------------------------------------------
*******************************************************************************/
#if !defined(SUMO_IMG_LIB_hw_sm)
#define SUMO_IMG_LIB_hw_sm

#include <stdlib.h>



//256

static const uint16_t image_data_hw_sm[]
//#if defined(_FORCE_PROGMEM__)
 PROGMEM 
//#endif
= {0x1082, 0x10a2, 0x18c3, 0x18c3, 0x18c3, 0x18e3, 0x2965, 0x39c7, 0x4208, 0x39c7, 0x3186, 0x2104, 0x2104, 0x2124, 0x2124, 0x2104, 0x10a2, 0x10a2, 0x18c3, 0x10a2, 0x2124, 0x31a6, 0x39c7, 0x39c7, 0x39c7, 0x39c7, 0x39e7, 0x39c7, 0x2965, 0x2104, 0x2124, 0x2124, 0x10a2, 0x10a2, 0x18c3, 0x3186, 0x31a6, 0x31a6, 0x31a6, 0x2945, 0x2104, 0x2965, 0x39c7, 0x39e7, 0x39e7, 0x39c7, 0x2104, 0x2104, 0x1082, 0x2124, 0x4a49, 0x2965, 0x31a6, 0x2965, 0x18e3, 0x2104, 0x2124, 0x2104, 0x2104, 0x3186, 0x39e7, 0x39c7, 0x528a, 0x2945, 0x1082, 0x2945, 0x31a6, 0x31a6, 0x3186, 0x2124, 0x2104, 0x2104, 0x2124, 0x2124, 0x2945, 0x3186, 0x4208, 0x4208, 0x4208, 0x2965, 0x1082, 0x2124, 0x3186, 0x2124, 0x3186, 0x39c7, 0x3186, 0x2945, 0x2124, 0x2965, 0x39c7, 0x4208, 0x39c7, 0x2945, 0x39c7, 0x2965, 0x10a2, 0x18e3, 0x39c7, 0x39e7, 0x2965, 0x2945, 0x39c7, 0x39c7, 0x39c7, 0x39e7, 0x39e7, 0x2965, 0x2965, 0x4a49, 0x4a49, 0x2104, 0x10a2, 0x18e3, 0x2965, 0x4208, 0x4a49, 0x31a6, 0x2945, 0x3186, 0x4a49, 0x3186, 0x2945, 0x4208, 0x4228, 0x4a69, 0x39e7, 0x2124, 0x10a2, 0x18c3, 0x3186, 0x2965, 0x2965, 0x39c7, 0x528a, 0x31a6, 0x39e7, 0x39c7, 0x4a69, 0x4228, 0x4a69, 0x31a6, 0x31a6, 0x2124, 0x1082, 0x2124, 0x39e7, 0x2965, 0x3186, 0x4a49, 0x3186, 0x39e7, 0x39e7, 0x39e7, 0x4a69, 0x31a6, 0x4a49, 0x2124, 0x4228, 0x2945, 0x1082, 0x2945, 0x31a6, 0x4a49, 0x4a49, 0x3186, 0x2945, 0x3186, 0x2945, 0x3186, 0x4208, 0x4a49, 0x4228, 0x4208, 0x4208, 0x2965, 0x1082, 0x2124, 0x2965, 0x2104, 0x39c7, 0x4228, 0x4208, 0x2124, 0x2965, 0x31a6, 0x4208, 0x52aa, 0x4208, 0x2945, 0x31a6, 0x2945, 0x10a2, 0x10a2, 0x2945, 0x31a6, 0x2124, 0x2945, 0x39e7, 0x3186, 0x3186, 0x4208, 0x4a49, 0x2945, 0x2965, 0x39c7, 0x2965, 0x18e3, 0x10a2, 0x10a2, 0x1082, 0x18c3, 0x2965, 0x3186, 0x2104, 0x3186, 0x4a49, 0x2965, 0x2124, 0x39c7, 0x3186, 0x18e3, 0x18c3, 0x18e3, 0x1082, 0x1082, 0x10a2, 0x10a2, 0x1082, 0x18e3, 0x31a6, 0x2965, 0x3186, 0x2965, 0x31a6, 0x2104, 0x18c3, 0x18e3, 0x18c3, 0x18c3, 0x1082, 0x1082, 0x10a2, 0x10a2, 0x18c3, 0x10a2, 0x1082, 0x3186, 0x52aa, 0x2965, 0x1082, 0x18c3, 0x18e3, 0x18c3, 0x18c3, 0x18c3};

static const tPicture hw_sm = { image_data_hw_sm, 16, 16, 256, 16, RLE_no }; 



#endif



