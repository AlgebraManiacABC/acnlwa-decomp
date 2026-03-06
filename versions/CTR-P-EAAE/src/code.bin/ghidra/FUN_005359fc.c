/**
 * FUN_005359fc.c
 * Source line: 777273
 * Body lines: 8
 */
#include "../../../include/types.h"

ItemID * FUN_005359fc(uint param_1)

{
  ItemID *id;
  
  if (param_1 < 155) {
    id = ItemID_ARRAY_00877770 + param_1 * 3;
  }
  else {
    id = (ItemID *)&ItemID_2_0087917c;
  }
  return id;
}
