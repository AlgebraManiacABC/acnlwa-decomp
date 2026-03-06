/**
 * Item_GetTopBitOf2.c
 * Source line: 395146
 * Body lines: 1
 */
#include "../../../include/types.h"

ushort Item_GetTopBitOf2(Item_t *param_1)

{
  return param_1->_x2 >> 15;
}
