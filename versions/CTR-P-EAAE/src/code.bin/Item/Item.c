#include "../../../include/item.h"

#define DAT_0053608c 0x953238
#define ModelNames 0x871AC4

extern ItemParam_t * Item_GetParam(Item_t *);
extern int FUN_007486dc(ItemParam_t *);

ushort Item_GetTopBitOf2(Item_t *param_1)
{
    return param_1->flags >> 15;
}

bool Item_IsID(Item_t *item, ushort item_id)
{
    return (item->id & 0xffff7fff) == item_id;
}

bool Item_IsNullItem(Item_t * item)
{
    return (item->id & 0x7fff) == 0x7ffe;
}

uint Item_IsValidID(Item_t * item)
{
    return ((uint)(item->id & ~0x00008000) - 0x2000 < NUM_ITEMS);
}

uint Item_Param11Valid(Item_t * item) {
    ItemParam_t * itemParam = Item_GetParam(item);
    if (itemParam)
    {
        return FUN_007486dc(itemParam) != 0;
    }
    return 0;
}

ushort Item_GetRawID(Item_t *param_1)
{
    return param_1->id & 0x7fff;
}

int Item_GetPrice(ItemParam_t * itemParam)
{
    return itemParam->buy_price * itemParam->price_multiplier;
}

int Item_GetID(Item_t * item)
{
    int item_id;
    if ((item->id & ~0x8000) - (unsigned int)0x2000 < NUM_ITEMS)
    {
        item_id = (item->id & ~0x8000) - 0x2000;
    }
    else
    {
        item_id = -1;
    }
    return item_id;
}

char * Item_GetModelName(Item_t * item)
{
    unsigned int item_id = Item_GetID(item);
    char ** p;
    if (item_id == 0xffffffff || item_id >= NUM_ITEMS)
    {
        p = (char**)DAT_0053608c;
        return p[11];
    }
    p = (char**)ModelNames;
    return p[item_id];
}

void Item_Clear(Item_t * item)
{
    item->id = 0x7ffe;
    item->flags = 0;
}

Item_t * Item_CopyAndReturn(Item_t *dst, Item_t *src)
{
    dst->id = src->id;
    dst->flags = src->flags;
    return dst;
}


void Item_Copy(Item_t *dst, Item_t *src)
{
    dst->id = src->id;
    dst->flags = src->flags;
    return;
}

uint Item_IsFromWishyOrSpotlight(Item_t * item)
{
    ItemParam_t * itemParam = Item_GetParam(item);
    if(itemParam && itemParam->source < NUM_SOURCES && itemParam->source == SPOTLIGHT_OR_WISHY) return 1;
    return 0;
}


uint Item_IsFromGracieGrace(Item_t *item)
{
    ItemParam_t *itemParam;
    ItemSource source;

    itemParam = Item_GetParam(item);
    if (
        (
            (itemParam != NULL) &&
            (source = itemParam->source, source < NUM_SOURCES)
        ) &&
        (
            (
                (source == 0x2e || source == GRACIEGRACE_SPRING ||
                    (
                        (
                            (source == GRACIEGRACE_SUMMER || source == GRACIEGRACE_FALL ||
                                (source == GRACIEGRACE_WINTER || source == GRACIEGRACE_SALE)
                            )
                        ) ||
                    (
                        source == GRACIEGRACE_SPRING_WALL ||
                        source == GRACIEGRACE_SUMMER_WALL
                    )
                )
            )
        ) ||
        (
            (
                source == GRACIEGRACE_FALL_WALL ||
                source == GRACIEGRACE_WINTER_WALL
            ) ||
            source == GRACIEGRACE_SALE_WALL
        )
       ))
    {
        return 1;
    }
    return 0;
}
