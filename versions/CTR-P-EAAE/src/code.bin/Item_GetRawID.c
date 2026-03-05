#include "../../include/types.h"
#include "../../include/item.h"

ushort Item_GetRawID(Item_t *param_1)
{
    return param_1->id & 0x7fff;
}
