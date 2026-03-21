#include "../../../include/item.h"

ushort Item_GetTopBitOf2(Item_t *param_1)
{
    return param_1->flags >> 15;
}