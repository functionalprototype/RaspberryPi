#ifndef OV7660_REGS_H
#define OV7660_REGS_H
#include "PiCAM.h"
const struct sensor_reg OV7660_QVGA[] PROGMEM =
{
	{0x11, 0x83},   
    {0x92, 0x48},   
    {0x93, 0x00},   
    {0x9d, 0x31},   
    {0x9e, 0x29},   
    {0x3b, 0x02},   
    {0x13, 0xf2},   
    {0x10, 0x00},   
    {0x00, 0x00},   
    {0x01, 0x80},   
    {0x02, 0x80},   
    {0x13, 0xf7},   
    {0x12, 0x14},   
    {0x04, 0x00},   
    {0x18, 0x4b},   
    {0x17, 0x23},   
    {0x32, 0xbf},   
    {0x19, 0x02},   
    {0x1a, 0x7a},   
    {0x03, 0x00},   
    {0x0e, 0x84},   
    {0x0f, 0x62},   
    {0x15, 0x02},   
    {0x16, 0x02},   
    {0x1b, 0x01},   
    {0x1e, 0x01},   
    {0x29, 0x3c},   
    {0x33, 0x00},   
    {0x34, 0x07},   
    {0x35, 0x84},   
    {0x36, 0x00},   
    {0x38, 0x13},   
    {0x39, 0x43},   
    {0x3a, 0x00},   
    {0x3c, 0x6c},   
    {0x3d, 0x90},   
    {0x3f, 0x29},   
    {0x40, 0xd1},   
    {0x41, 0x20},   
    {0x6b, 0x0a},   
    {0xa1, 0xc8},   
    {0x69, 0x80},   
    {0x43, 0xf0},   
    {0x44, 0x10},   
    {0x45, 0x78},   
    {0x46, 0xa8},   
    {0x47, 0x60},   
    {0x48, 0x80},   
    {0x59, 0xba},   
    {0x5a, 0x9a},   
    {0x5b, 0x22},   
    {0x5c, 0xb9},   
    {0x5d, 0x9b},   
    {0x5e, 0x10},   
    {0x5f, 0xe0},   
    {0x60, 0x85},   
    {0x61, 0x60},   
    {0x9f, 0x9d},   
    {0xa0, 0xa0},   
    {0x4f, 0xae},   
    {0x50, 0x26},   
    {0x51, 0x08},   
    {0x52, 0x1a},   
    {0x53, 0xa9},   
    {0x54, 0x0f},   
    {0x55, 0x05},   
    {0x56, 0x46},   
    {0x57, 0xcb},   
    {0x58, 0x77},   
    {0x8b, 0xcc},   
    {0x8c, 0xcc},   
    {0x8d, 0xcf},   
    {0x6c, 0x40},   
    {0x6d, 0x30},   
    {0x6e, 0x4b},   
    {0x6f, 0x60},   
    {0x70, 0x70},   
    {0x71, 0x70},   
    {0x72, 0x70},   
    {0x73, 0x70},   
    {0x74, 0x60},   
    {0x75, 0x60},   
    {0x76, 0x50},   
    {0x77, 0x48},   
    {0x78, 0x3a},   
    {0x79, 0x2e},   
    {0x7a, 0x28},   
    {0x7b, 0x22},   
    {0x7c, 0x04},   
    {0x7d, 0x07},   
    {0x7e, 0x10},   
    {0x7f, 0x28},   
    {0x80, 0x36},   
    {0x81, 0x44},   
    {0x82, 0x52},   
    {0x83, 0x60},   
    {0x84, 0x6c},   
    {0x85, 0x78},   
    {0x86, 0x8c},   
    {0x87, 0x9e},   
    {0x88, 0xbb},   
    {0x89, 0xd2},   
    {0x8a, 0xe6},   
    {0x14, 0x2e},   
    {0x24, 0x68},   
    {0x25, 0x58},   
		{0xff, 0xff},
};        


#endif
