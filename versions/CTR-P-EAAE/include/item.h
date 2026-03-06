#ifndef CTR_P_EAAE_ITEM_H
#define CTR_P_EAAE_ITEM_H

#include "types.h"

typedef struct Item_t
{
    ushort id;
    ushort flags;
} Item_t;

typedef enum ItemSource {
    NO_SOURCE=0,
    SPOTLIGHT_OR_WISHY=9,
    MOST_BUGS=13,
    NEW_YEAR_HANDHELDS=30,
    SETSUBUN_HANDHELDS=31,
    CANDY=32,
    FORTUNE_COOKIES=34,
    NOOKLINGS_CHRISTMAS=35,
    NOOKLINGS_HALLOWEEN=36,
    NOOKLINGS_THANKSGIVING=37,
    NOOKLINGS_MARCH_1_3=38,
    NOOKLINGS_MAY_1_5=39,
    NEW_YEAR_HATS=63,
    GRACIEGRACE_SPRING=83,
    GRACIEGRACE_SUMMER=84,
    GRACIEGRACE_FALL=85,
    GRACIEGRACE_WINTER=86,
    GRACIEGRACE_SALE=87,
    GRACIEGRACE_SPRING_WALL=88,
    GRACIEGRACE_SUMMER_WALL=89,
    GRACIEGRACE_FALL_WALL=90,
    GRACIEGRACE_WINTER_WALL=91,
    GRACIEGRACE_SALE_WALL=92,
    DINOSAUR_FOSSILS=105,
    VILLAGER_PICS=114,
    HALOWEEN_HATS=115,
    SPRING_BUTTERFLIES=117,
    CICADA=118,
    RED_DRAGONFLY=119,
    LAND_BUGS=120,
    LOACH=121,
    SUMMER_FISH=122,
    SALMON=123,
    WINTER_FISH=124,
    BIRTHDAY=125,
    FEATHERS=127,
    BLANCAS_PIC=128,
    PINK_CARNATIONS=129,
    RED_CARNATIONS=130,
    FIREWORKS=131,
    MUSHROOMS=132,
    SANTA_OUTFIT=133,
    SPOOKY_WALL_FLOOR=166,
    HARVEST_WALL_FLOOR=167,
    JINGLE_WALL_FLOOR=168,
    CHOCOLATE_HEART=170,
    NUM_SOURCES=185
} ItemSource;

typedef struct ItemParam_t
{
    undefined field0_0x0;
    undefined field1_0x1;
    ushort buy_price;
    ushort field3_0x4;
    ushort field4_0x6;
    undefined field5_0x8;
    undefined field6_0x9;
    byte A;
    undefined field8_0xb;
    undefined field9_0xc;
    ItemSource source;
    signed char price_multiplier;
    undefined field12_0xf;
    undefined field13_0x10;
    byte field14_0x11;
    undefined field15_0x12;
    undefined field16_0x13;
    undefined field17_0x14;
    undefined field18_0x15;
    undefined field19_0x16;
    byte field20_0x17;
    undefined field21_0x18;
    byte field22_0x19;
    undefined field23_0x1a;
    undefined field24_0x1b;
    char field25_0x1c;
    byte field26_0x1d;

} ItemParam_t;

#define NUM_ITEMS 0x172B

#endif
