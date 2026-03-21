#ifndef VILLAGER_H
#define VILLAGER_H
#include "types.h"

#define NUM_VILLAGERS 399

typedef struct ConstPackEntry_t {
    struct Item_t *field0_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    char id_str[6];
    char str_2[4];
    char str_3[4];
    char str_4[4];
    undefined field11_0x1c;
    undefined field12_0x1d;
    undefined field13_0x1e;
    byte field14_0x1f;
    byte field15_0x20;
    undefined field16_0x21;
}   ConstPackEntry_t;

#endif