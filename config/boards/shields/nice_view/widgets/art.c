/*
 *
 * Copyright (c) 2023 Collin Hodge
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BALLOON
#define LV_ATTRIBUTE_IMG_BALLOON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BALLOON uint8_t
    balloon_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0A,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xBF, 0x0D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x0B, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x06, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x0B,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x0E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xAF, 0x05, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5B, 0x0B, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xB5, 0x0D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6E, 0x07,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xAB, 0x0D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xBF, 0x75, 0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xAD, 0x0D, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xAF, 0x6A, 0x07, 0xFF, 0xFF, 0xFF, 0xBF, 0xAA, 0xEA, 0x57, 0xDB, 0x0D,
        0xFF, 0xFF, 0xBF, 0x45, 0xD7, 0xAD, 0xAA, 0xBA, 0x0A, 0xFF, 0xFF, 0x4F, 0x32, 0x3D, 0x5B,
        0x56, 0xD5, 0x07, 0xFF, 0x7F, 0xB5, 0xEC, 0xEE, 0x56, 0x55, 0xAA, 0x0C, 0xFD, 0x9F, 0x5E,
        0xB5, 0x37, 0x6D, 0xAC, 0xBA, 0x0B, 0xF7, 0xAF, 0xAB, 0xED, 0xFF, 0xAA, 0x3A, 0x62, 0x05,
        0xEA, 0x97, 0x7E, 0xBB, 0x5D, 0x6B, 0x55, 0x55, 0x0B, 0x15, 0x55, 0xAB, 0xF5, 0xFF, 0xDA,
        0x56, 0xA9, 0x0A, 0xDA, 0xA7, 0x7E, 0xD7, 0xBF, 0xAA, 0xBA, 0x4A, 0x05, 0x55, 0x1D, 0xAB,
        0xFC, 0xFB, 0xF6, 0x6F, 0x55, 0x0A, 0xF5, 0xEB, 0xDE, 0xEB, 0xDF, 0x5D, 0x95, 0x50, 0x01,
        0x95, 0x5E, 0x77, 0xFD, 0x7E, 0xF5, 0x0A, 0x84, 0x04, 0xAA, 0xFB, 0xDE, 0xF7, 0xF7, 0xAA,
        0x02, 0x40, 0x0A, 0x65, 0xD7, 0xFF, 0xEE, 0xDF, 0x5D, 0x41, 0x80, 0x02, 0xDA, 0x7E, 0xFB,
        0xBB, 0x7F, 0xAB, 0x10, 0x25, 0x01, 0x55, 0xD5, 0xDF, 0xF7, 0xDD, 0x5A, 0x40, 0x42, 0x04,
        0xEA, 0xAA, 0xF6, 0xED, 0xFF, 0x2B, 0x94, 0x84, 0x0A, 0x15, 0x00, 0xFA, 0xDF, 0x56, 0x17,
        0x0A, 0x4A, 0x05, 0x0A, 0x21, 0xB4, 0xF5, 0xFF, 0x6A, 0x81, 0x40, 0x01, 0x45, 0xAE, 0xD0,
        0xDF, 0xDB, 0x5D, 0x04, 0x54, 0x08, 0x81, 0x4A, 0xA3, 0xF6, 0x7E, 0xB7, 0x08, 0x51, 0x02,
        0x52, 0xA5, 0xC6, 0xFD, 0xF7, 0x6E, 0x29, 0x14, 0x00, 0xC0, 0x86, 0x0A, 0xEB, 0xDE, 0x55,
        0x01, 0x45, 0x09, 0x4B, 0x45, 0x57, 0xF5, 0x77, 0xBF, 0x52, 0x05, 0x00, 0x95, 0x82, 0x0A,
        0xFA, 0xDD, 0x62, 0xA5, 0x50, 0x02, 0xAF, 0x5A, 0x55, 0x7F, 0x77, 0xC9, 0x0A, 0x02, 0x04,
        0x78, 0x95, 0x8A, 0xDE, 0x55, 0x24, 0x2D, 0x24, 0x01, 0x42, 0x17, 0xAA, 0xF7, 0x71, 0x91,
        0x55, 0x01, 0x08, 0x84, 0xFA, 0xE5, 0xFF, 0x55, 0xA2, 0xBA, 0xAA, 0x00, 0x59, 0xA4, 0xFE,
        0x7F, 0xBB, 0x44, 0xD5, 0x02, 0x0A, 0x22, 0xA9, 0xBB, 0xFD, 0xAF, 0x92, 0xBA, 0xAA, 0x00,
        0xAA, 0x5A, 0xFF, 0xBF, 0x8A, 0x24, 0xD4, 0x0A, 0x05, 0x55, 0xF5, 0xEE, 0xFF, 0x95, 0x92,
        0x7E, 0x5B, 0x02, 0x6A, 0xAD, 0xFF, 0xB7, 0xAA, 0x48, 0xAB, 0xA5, 0x04, 0x50, 0xF7, 0xFF,
        0xFE, 0x5F, 0xA2, 0xFE, 0x28, 0x09, 0xAF, 0xBD, 0xF7, 0xFF, 0x15, 0x49, 0xAB, 0x43, 0x0A,
        0x55, 0xED, 0xBF, 0xB7, 0x3F, 0x82, 0x7F, 0x9F, 0x0A, 0xD5, 0xFB, 0xFF, 0xFF, 0xEF, 0xE8,
        0xEA, 0x52, 0x0A, 0xA0, 0xFE, 0xFD, 0x7E, 0xBB, 0x40, 0xDF, 0xA5, 0x05, 0x6A, 0xB7, 0xAF,
        0xF7, 0x7F, 0xA9, 0xBB, 0x2A, 0x0D, 0xD4, 0xFE, 0xFF, 0xBF, 0xDB, 0xE2, 0xEE, 0x4B, 0x0B,
        0x6F, 0xFB, 0xFD, 0xED, 0x6F, 0x51, 0xBB, 0xAD, 0x0A, 0xB5, 0x6F, 0x6F, 0xFF, 0xB6, 0xE5,
        0xEE, 0xB6, 0x06, 0xDF, 0xFD, 0xBF, 0xBF, 0x7F, 0xA9, 0xBB, 0xAB, 0x0D, 0x7A, 0xFF, 0xFB,
        0xED, 0xAA, 0x73, 0xF7, 0x56, 0x05, 0xEB, 0x6D, 0xEF, 0xFF, 0x7F, 0xD5, 0xDA, 0x2D, 0x0D,
        0xBE, 0xFF, 0x7B, 0xAB, 0xAA, 0x55, 0x6F, 0xF7, 0x0A, 0xD5, 0xF5, 0xFE, 0xFE, 0xDF, 0xD2,
        0xBA, 0xAD, 0x0D, 0x7D, 0xBF, 0xAF, 0xB7, 0x6A, 0xA1, 0xF7, 0x6B, 0x07, 0xAB, 0xED, 0xFB,
        0xFD, 0x37, 0x08, 0xAA, 0x56, 0x0D, 0xFA, 0x7F, 0xBF, 0x57, 0x4D, 0x80, 0xDC, 0xDD, 0x0B,
        0x6F, 0xDB, 0xED, 0xFE, 0x0A, 0x02, 0xA0, 0xB6, 0x0E, 0xF5, 0xED, 0xBF, 0xAB, 0x25, 0x10,
        0xA2, 0xED, 0x0B, 0xAE, 0x7E, 0xEB, 0x5E, 0x80, 0x44, 0x00, 0xBB, 0x06, 0xD9, 0xEB, 0xBE,
        0x6B, 0x21, 0x90, 0x42, 0xF7, 0x0D, 0xB6, 0x5E, 0xEB, 0x96, 0x88, 0xAA, 0x54, 0x5D, 0x0F,
        0xED, 0xDB, 0xBE, 0x15, 0x50, 0x45, 0x45, 0xF7, 0x0D, 0x59, 0xB7, 0x6B, 0x05, 0x52, 0xA9,
        0xAE, 0xDD, 0x07, 0xB6, 0xED, 0x56, 0x81, 0xAC, 0xAA, 0x55, 0x77, 0x0D, 0xD5, 0xBE, 0xAD,
        0x12, 0x6B, 0x6B, 0xFB, 0xFD, 0x07, 0xEA, 0x6B, 0x7B, 0xD5, 0xDA, 0xDA, 0xAE, 0xAF, 0x0E,
        0xB4, 0xDE, 0xAD, 0x57, 0xB7, 0xB5, 0x7B, 0xFB, 0x05, 0x6D, 0x7B, 0x77, 0xED, 0xDA, 0x6E,
        0xED, 0x5F, 0x0F, 0xDA, 0xD7, 0xDD, 0x5B, 0x6F, 0xDB, 0xBF, 0xF5, 0x0A, 0x6A, 0x7D, 0xBB,
        0xF6, 0xB5, 0x77, 0xF5, 0xAF, 0x07, 0xDD, 0xEB, 0xD6, 0x5D, 0xEF, 0xDA, 0x5F, 0xDD, 0x0A,
        0x6A, 0xDD, 0x7D, 0xF7, 0xBA, 0x77, 0xFD, 0x6B, 0x0F, 0xDD, 0xB7, 0xD6, 0xDD, 0x77, 0xDD,
        0xB7, 0xF6, 0x0A, 0xB5, 0xFA, 0xB5, 0xB6, 0xDA, 0x77, 0xFD, 0x5D, 0x0F, 0xD6, 0x56, 0xEB,
        0xFD, 0x6F, 0xDD, 0x57, 0xEB, 0x05, 0xB5, 0xFD, 0x56, 0xAB, 0xFA, 0x77, 0xDF, 0xBE, 0x0F,
        0xAA, 0x56, 0x55, 0xDD, 0xAD, 0xDA, 0xB5, 0x6B, 0x05, 0x55, 0xED, 0x5B, 0xB5, 0xFE, 0x7F,
        0xEB, 0xDE, 0x0F, 0xAA, 0x5B, 0xAD, 0x4A, 0xAB, 0xAA, 0xBE, 0x6B, 0x05, 0x52, 0xF6, 0x56,
        0xA9, 0x76, 0xF7, 0x6A, 0xFD, 0x0B, 0x55, 0x55, 0xBB, 0xAA, 0xAA, 0xAA, 0xDD, 0xAB, 0x0E,
        0x4A, 0xED, 0x6E, 0xAB, 0x6A, 0x5D, 0x6B, 0xFD, 0x05, 0x55, 0xB5, 0xD5, 0xB6, 0xD5, 0xF6,
        0xB6, 0x57, 0x0F, 0x55, 0xAD, 0xBE, 0x6D, 0xBD, 0xAD, 0x6D, 0xBD, 0x05, 0x55, 0x75, 0x6B,
        0xDB, 0x56, 0x5B, 0xD5, 0xD6, 0x0E, 0xAD, 0xAA, 0xDD, 0xB6, 0xED, 0xF6, 0xBE, 0xBB, 0x0B,
        0x6B, 0x6D, 0xAB, 0x6D, 0xDB, 0xAD, 0xD5, 0x76, 0x0D, 0x5A, 0xD5, 0x76, 0xDB, 0xB6, 0x7A,
        0xBB, 0xAD, 0x07, 0xD5, 0xAA, 0xDA, 0xB6, 0x6D, 0xAF, 0xD6, 0xF6, 0x0A, 0xB7, 0xAA, 0x56,
        0x55, 0xDB, 0xB5, 0xBB, 0x5D, 0x0F, 0x6A, 0xAB, 0x5A, 0xFB, 0x76, 0xEF, 0xEE, 0xB6, 0x05,
        0xDD, 0x56, 0xB5, 0x56, 0xDB, 0xB5, 0xB5, 0xDB, 0x0E, 0xAB, 0xAA, 0xD6, 0xDD, 0xBE, 0x6E,
        0x6F, 0x77, 0x0B, 0xB6, 0x5D, 0x55, 0x6B, 0xEB, 0xB5, 0xF5, 0xDA, 0x0D, 0x6D, 0xAB, 0xAA,
        0xB6, 0x5F, 0xEF, 0x5E, 0x6F, 0x0B, 0xAB, 0xDA, 0xEA, 0xDA, 0x6A, 0xB5, 0xEB, 0xB5, 0x0D,
        0xDA, 0xB6, 0xAA, 0x77, 0xDF, 0xEF, 0xBE, 0xEE, 0x06, 0xB7, 0xAD, 0xA9, 0xEC, 0x6A, 0xB5,
        0xD5, 0x5D, 0x0F, 0x6A, 0x6B, 0x6B, 0x5B, 0xDF, 0xDE, 0xBE, 0xEB, 0x05, 0xDD, 0xDA, 0xAA,
        0xED, 0xB5, 0x6B, 0x6B, 0xBD, 0x0E, 0xAB, 0xB5, 0x56, 0xBB, 0x6E, 0xBD, 0xD7, 0xEB, 0x0B,
        0x76, 0xAF, 0xD5, 0xD6, 0xB5, 0xD7, 0xBA, 0x5E, 0x0D, 0xAD, 0x6A, 0xAB, 0xBA, 0xEE, 0xBA,
        0xF7, 0xF5, 0x0B, 0xDB, 0xDA, 0x2E, 0xD5, 0xB5, 0x77, 0xAD, 0xAE, 0x0E, 0xB6, 0xB7, 0xAA,
        0xB6, 0x6E, 0xAD, 0xFB, 0x7D, 0x0B, 0x55, 0xD5, 0x36, 0x55, 0xB5, 0x7B, 0xAD, 0xD6, 0x06,
        0xED, 0xBA, 0x6D, 0xD5, 0x6A, 0xAD, 0xF7, 0xBD, 0x0F, 0x5B, 0x57, 0x55, 0xAA, 0xB6, 0xDB,
        0x5A, 0xD7, 0x0A, 0xB6, 0xEA, 0xB6, 0xAA, 0x5A, 0xB5, 0xF7, 0x7A, 0x07, 0xD5, 0xB6, 0x6D,
        0x29, 0xD5, 0xEE, 0x5A, 0xD7, 0x0D, 0x6D, 0xAD, 0xDA, 0x52, 0xAD, 0x5A, 0xB7, 0xBD, 0x06,
        0xDB, 0xDB, 0x56, 0xA9, 0xAA, 0xD5, 0xDA, 0xF6, 0x0B, 0xB6, 0xAA, 0xB5, 0x22, 0x55, 0xB5,
        0xB6, 0x5B, 0x0D, 0xAD, 0x76, 0x6D, 0x55, 0x55, 0x55, 0x6D, 0xED, 0x0B, 0xB5, 0xAD, 0xAA,
        0x85, 0x44, 0xCA, 0xD5, 0x56, 0x0D, 0x6B, 0x6B, 0xB7, 0x52, 0xAA, 0x54, 0xAA, 0xBD, 0x05
};

const lv_img_dsc_t balloon = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = balloon_map,
};

#ifndef LV_ATTRIBUTE_IMG_MOUNTAIN
#define LV_ATTRIBUTE_IMG_MOUNTAIN
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_MOUNTAIN uint8_t
    mountain_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0A,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xBF, 0x0D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x0B, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x06, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x0B,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x0E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xAF, 0x05, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5B, 0x0B, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xB5, 0x0D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6E, 0x07,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xAB, 0x0D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xBF, 0x75, 0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xAD, 0x0D, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xAF, 0x6A, 0x07, 0xFF, 0xFF, 0xFF, 0xBF, 0xAA, 0xEA, 0x57, 0xDB, 0x0D,
        0xFF, 0xFF, 0xBF, 0x45, 0xD7, 0xAD, 0xAA, 0xBA, 0x0A, 0xFF, 0xFF, 0x4F, 0x32, 0x3D, 0x5B,
        0x56, 0xD5, 0x07, 0xFF, 0x7F, 0xB5, 0xEC, 0xEE, 0x56, 0x55, 0xAA, 0x0C, 0xFD, 0x9F, 0x5E,
        0xB5, 0x37, 0x6D, 0xAC, 0xBA, 0x0B, 0xF7, 0xAF, 0xAB, 0xED, 0xFF, 0xAA, 0x3A, 0x62, 0x05,
        0xEA, 0x97, 0x7E, 0xBB, 0x5D, 0x6B, 0x55, 0x55, 0x0B, 0x15, 0x55, 0xAB, 0xF5, 0xFF, 0xDA,
        0x56, 0xA9, 0x0A, 0xDA, 0xA7, 0x7E, 0xD7, 0xBF, 0xAA, 0xBA, 0x4A, 0x05, 0x55, 0x1D, 0xAB,
        0xFC, 0xFB, 0xF6, 0x6F, 0x55, 0x0A, 0xF5, 0xEB, 0xDE, 0xEB, 0xDF, 0x5D, 0x95, 0x50, 0x01,
        0x95, 0x5E, 0x77, 0xFD, 0x7E, 0xF5, 0x0A, 0x84, 0x04, 0xAA, 0xFB, 0xDE, 0xF7, 0xF7, 0xAA,
        0x02, 0x40, 0x0A, 0x65, 0xD7, 0xFF, 0xEE, 0xDF, 0x5D, 0x41, 0x80, 0x02, 0xDA, 0x7E, 0xFB,
        0xBB, 0x7F, 0xAB, 0x10, 0x25, 0x01, 0x55, 0xD5, 0xDF, 0xF7, 0xDD, 0x5A, 0x40, 0x42, 0x04,
        0xEA, 0xAA, 0xF6, 0xED, 0xFF, 0x2B, 0x94, 0x84, 0x0A, 0x15, 0x00, 0xFA, 0xDF, 0x56, 0x17,
        0x0A, 0x4A, 0x05, 0x0A, 0x21, 0xB4, 0xF5, 0xFF, 0x6A, 0x81, 0x40, 0x01, 0x45, 0xAE, 0xD0,
        0xDF, 0xDB, 0x5D, 0x04, 0x54, 0x08, 0x81, 0x4A, 0xA3, 0xF6, 0x7E, 0xB7, 0x08, 0x51, 0x02,
        0x52, 0xA5, 0xC6, 0xFD, 0xF7, 0x6E, 0x29, 0x14, 0x00, 0xC0, 0x86, 0x0A, 0xEB, 0xDE, 0x55,
        0x01, 0x45, 0x09, 0x4B, 0x45, 0x57, 0xF5, 0x77, 0xBF, 0x52, 0x05, 0x00, 0x95, 0x82, 0x0A,
        0xFA, 0xDD, 0x62, 0xA5, 0x50, 0x02, 0xAF, 0x5A, 0x55, 0x7F, 0x77, 0xC9, 0x0A, 0x02, 0x04,
        0x78, 0x95, 0x8A, 0xDE, 0x55, 0x24, 0x2D, 0x24, 0x01, 0x42, 0x17, 0xAA, 0xF7, 0x71, 0x91,
        0x55, 0x01, 0x08, 0x84, 0xFA, 0xE5, 0xFF, 0x55, 0xA2, 0xBA, 0xAA, 0x00, 0x59, 0xA4, 0xFE,
        0x7F, 0xBB, 0x44, 0xD5, 0x02, 0x0A, 0x22, 0xA9, 0xBB, 0xFD, 0xAF, 0x92, 0xBA, 0xAA, 0x00,
        0xAA, 0x5A, 0xFF, 0xBF, 0x8A, 0x24, 0xD4, 0x0A, 0x05, 0x55, 0xF5, 0xEE, 0xFF, 0x95, 0x92,
        0x7E, 0x5B, 0x02, 0x6A, 0xAD, 0xFF, 0xB7, 0xAA, 0x48, 0xAB, 0xA5, 0x04, 0x50, 0xF7, 0xFF,
        0xFE, 0x5F, 0xA2, 0xFE, 0x28, 0x09, 0xAF, 0xBD, 0xF7, 0xFF, 0x15, 0x49, 0xAB, 0x43, 0x0A,
        0x55, 0xED, 0xBF, 0xB7, 0x3F, 0x82, 0x7F, 0x9F, 0x0A, 0xD5, 0xFB, 0xFF, 0xFF, 0xEF, 0xE8,
        0xEA, 0x52, 0x0A, 0xA0, 0xFE, 0xFD, 0x7E, 0xBB, 0x40, 0xDF, 0xA5, 0x05, 0x6A, 0xB7, 0xAF,
        0xF7, 0x7F, 0xA9, 0xBB, 0x2A, 0x0D, 0xD4, 0xFE, 0xFF, 0xBF, 0xDB, 0xE2, 0xEE, 0x4B, 0x0B,
        0x6F, 0xFB, 0xFD, 0xED, 0x6F, 0x51, 0xBB, 0xAD, 0x0A, 0xB5, 0x6F, 0x6F, 0xFF, 0xB6, 0xE5,
        0xEE, 0xB6, 0x06, 0xDF, 0xFD, 0xBF, 0xBF, 0x7F, 0xA9, 0xBB, 0xAB, 0x0D, 0x7A, 0xFF, 0xFB,
        0xED, 0xAA, 0x73, 0xF7, 0x56, 0x05, 0xEB, 0x6D, 0xEF, 0xFF, 0x7F, 0xD5, 0xDA, 0x2D, 0x0D,
        0xBE, 0xFF, 0x7B, 0xAB, 0xAA, 0x55, 0x6F, 0xF7, 0x0A, 0xD5, 0xF5, 0xFE, 0xFE, 0xDF, 0xD2,
        0xBA, 0xAD, 0x0D, 0x7D, 0xBF, 0xAF, 0xB7, 0x6A, 0xA1, 0xF7, 0x6B, 0x07, 0xAB, 0xED, 0xFB,
        0xFD, 0x37, 0x08, 0xAA, 0x56, 0x0D, 0xFA, 0x7F, 0xBF, 0x57, 0x4D, 0x80, 0xDC, 0xDD, 0x0B,
        0x6F, 0xDB, 0xED, 0xFE, 0x0A, 0x02, 0xA0, 0xB6, 0x0E, 0xF5, 0xED, 0xBF, 0xAB, 0x25, 0x10,
        0xA2, 0xED, 0x0B, 0xAE, 0x7E, 0xEB, 0x5E, 0x80, 0x44, 0x00, 0xBB, 0x06, 0xD9, 0xEB, 0xBE,
        0x6B, 0x21, 0x90, 0x42, 0xF7, 0x0D, 0xB6, 0x5E, 0xEB, 0x96, 0x88, 0xAA, 0x54, 0x5D, 0x0F,
        0xED, 0xDB, 0xBE, 0x15, 0x50, 0x45, 0x45, 0xF7, 0x0D, 0x59, 0xB7, 0x6B, 0x05, 0x52, 0xA9,
        0xAE, 0xDD, 0x07, 0xB6, 0xED, 0x56, 0x81, 0xAC, 0xAA, 0x55, 0x77, 0x0D, 0xD5, 0xBE, 0xAD,
        0x12, 0x6B, 0x6B, 0xFB, 0xFD, 0x07, 0xEA, 0x6B, 0x7B, 0xD5, 0xDA, 0xDA, 0xAE, 0xAF, 0x0E,
        0xB4, 0xDE, 0xAD, 0x57, 0xB7, 0xB5, 0x7B, 0xFB, 0x05, 0x6D, 0x7B, 0x77, 0xED, 0xDA, 0x6E,
        0xED, 0x5F, 0x0F, 0xDA, 0xD7, 0xDD, 0x5B, 0x6F, 0xDB, 0xBF, 0xF5, 0x0A, 0x6A, 0x7D, 0xBB,
        0xF6, 0xB5, 0x77, 0xF5, 0xAF, 0x07, 0xDD, 0xEB, 0xD6, 0x5D, 0xEF, 0xDA, 0x5F, 0xDD, 0x0A,
        0x6A, 0xDD, 0x7D, 0xF7, 0xBA, 0x77, 0xFD, 0x6B, 0x0F, 0xDD, 0xB7, 0xD6, 0xDD, 0x77, 0xDD,
        0xB7, 0xF6, 0x0A, 0xB5, 0xFA, 0xB5, 0xB6, 0xDA, 0x77, 0xFD, 0x5D, 0x0F, 0xD6, 0x56, 0xEB,
        0xFD, 0x6F, 0xDD, 0x57, 0xEB, 0x05, 0xB5, 0xFD, 0x56, 0xAB, 0xFA, 0x77, 0xDF, 0xBE, 0x0F,
        0xAA, 0x56, 0x55, 0xDD, 0xAD, 0xDA, 0xB5, 0x6B, 0x05, 0x55, 0xED, 0x5B, 0xB5, 0xFE, 0x7F,
        0xEB, 0xDE, 0x0F, 0xAA, 0x5B, 0xAD, 0x4A, 0xAB, 0xAA, 0xBE, 0x6B, 0x05, 0x52, 0xF6, 0x56,
        0xA9, 0x76, 0xF7, 0x6A, 0xFD, 0x0B, 0x55, 0x55, 0xBB, 0xAA, 0xAA, 0xAA, 0xDD, 0xAB, 0x0E,
        0x4A, 0xED, 0x6E, 0xAB, 0x6A, 0x5D, 0x6B, 0xFD, 0x05, 0x55, 0xB5, 0xD5, 0xB6, 0xD5, 0xF6,
        0xB6, 0x57, 0x0F, 0x55, 0xAD, 0xBE, 0x6D, 0xBD, 0xAD, 0x6D, 0xBD, 0x05, 0x55, 0x75, 0x6B,
        0xDB, 0x56, 0x5B, 0xD5, 0xD6, 0x0E, 0xAD, 0xAA, 0xDD, 0xB6, 0xED, 0xF6, 0xBE, 0xBB, 0x0B,
        0x6B, 0x6D, 0xAB, 0x6D, 0xDB, 0xAD, 0xD5, 0x76, 0x0D, 0x5A, 0xD5, 0x76, 0xDB, 0xB6, 0x7A,
        0xBB, 0xAD, 0x07, 0xD5, 0xAA, 0xDA, 0xB6, 0x6D, 0xAF, 0xD6, 0xF6, 0x0A, 0xB7, 0xAA, 0x56,
        0x55, 0xDB, 0xB5, 0xBB, 0x5D, 0x0F, 0x6A, 0xAB, 0x5A, 0xFB, 0x76, 0xEF, 0xEE, 0xB6, 0x05,
        0xDD, 0x56, 0xB5, 0x56, 0xDB, 0xB5, 0xB5, 0xDB, 0x0E, 0xAB, 0xAA, 0xD6, 0xDD, 0xBE, 0x6E,
        0x6F, 0x77, 0x0B, 0xB6, 0x5D, 0x55, 0x6B, 0xEB, 0xB5, 0xF5, 0xDA, 0x0D, 0x6D, 0xAB, 0xAA,
        0xB6, 0x5F, 0xEF, 0x5E, 0x6F, 0x0B, 0xAB, 0xDA, 0xEA, 0xDA, 0x6A, 0xB5, 0xEB, 0xB5, 0x0D,
        0xDA, 0xB6, 0xAA, 0x77, 0xDF, 0xEF, 0xBE, 0xEE, 0x06, 0xB7, 0xAD, 0xA9, 0xEC, 0x6A, 0xB5,
        0xD5, 0x5D, 0x0F, 0x6A, 0x6B, 0x6B, 0x5B, 0xDF, 0xDE, 0xBE, 0xEB, 0x05, 0xDD, 0xDA, 0xAA,
        0xED, 0xB5, 0x6B, 0x6B, 0xBD, 0x0E, 0xAB, 0xB5, 0x56, 0xBB, 0x6E, 0xBD, 0xD7, 0xEB, 0x0B,
        0x76, 0xAF, 0xD5, 0xD6, 0xB5, 0xD7, 0xBA, 0x5E, 0x0D, 0xAD, 0x6A, 0xAB, 0xBA, 0xEE, 0xBA,
        0xF7, 0xF5, 0x0B, 0xDB, 0xDA, 0x2E, 0xD5, 0xB5, 0x77, 0xAD, 0xAE, 0x0E, 0xB6, 0xB7, 0xAA,
        0xB6, 0x6E, 0xAD, 0xFB, 0x7D, 0x0B, 0x55, 0xD5, 0x36, 0x55, 0xB5, 0x7B, 0xAD, 0xD6, 0x06,
        0xED, 0xBA, 0x6D, 0xD5, 0x6A, 0xAD, 0xF7, 0xBD, 0x0F, 0x5B, 0x57, 0x55, 0xAA, 0xB6, 0xDB,
        0x5A, 0xD7, 0x0A, 0xB6, 0xEA, 0xB6, 0xAA, 0x5A, 0xB5, 0xF7, 0x7A, 0x07, 0xD5, 0xB6, 0x6D,
        0x29, 0xD5, 0xEE, 0x5A, 0xD7, 0x0D, 0x6D, 0xAD, 0xDA, 0x52, 0xAD, 0x5A, 0xB7, 0xBD, 0x06,
        0xDB, 0xDB, 0x56, 0xA9, 0xAA, 0xD5, 0xDA, 0xF6, 0x0B, 0xB6, 0xAA, 0xB5, 0x22, 0x55, 0xB5,
        0xB6, 0x5B, 0x0D, 0xAD, 0x76, 0x6D, 0x55, 0x55, 0x55, 0x6D, 0xED, 0x0B, 0xB5, 0xAD, 0xAA,
        0x85, 0x44, 0xCA, 0xD5, 0x56, 0x0D, 0x6B, 0x6B, 0xB7, 0x52, 0xAA, 0x54, 0xAA, 0xBD, 0x05
};

const lv_img_dsc_t mountain = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = mountain_map,
};
