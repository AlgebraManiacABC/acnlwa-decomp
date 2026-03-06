/**
 * Item_Param11Valid.c
 * Source line: 409532
 * Body lines: 10
 */
#include "../../../include/types.h"

uint Item_Param11Valid(Item_t *item)

{
  ItemParam_t *itemParam;
  int field11_valid;
  uint valid;
  
  itemParam = Item_GetParam(item);
  valid = 0;
  if ((itemParam != NULL) &&
     (field11_valid = FUN_007486dc(itemParam), valid = 0, field11_valid != 0)) {
    valid = 1;
  }
  return valid;
}
