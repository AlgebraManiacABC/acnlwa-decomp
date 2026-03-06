/**
 * FUN_0076868c.c
 * Source line: 1126109
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0076868c(Item_t *param_1)

{
  ItemSource IVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 != NULL) && (IVar1 = pIVar2->source, IVar1 < NumSources)) &&
     ((IVar1 == New Year Handhelds || IVar1 == Setsubun Handhelds ||
      (((IVar1 == Candy || IVar1 == 0x21 ||
        (IVar1 == Spooky Walls/Floors || IVar1 == Harvest Walls/Floors)) ||
       (IVar1 == Jingle Walls/Floors || IVar1 == Fireworks)))))) {
    return 1;
  }
  return 0;
}
