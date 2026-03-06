/**
 * FUN_0076845c.c
 * Source line: 1125948
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0076845c(Item_t *param_1)

{
  ItemSource IVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 != NULL) && (IVar1 = pIVar2->source, IVar1 < NumSources)) &&
     ((IVar1 == Nooklings (Christmas) || IVar1 == Nooklings (Halloween) ||
      ((IVar1 == Nooklings (Thanksgiving) || IVar1 == Nooklings (March 1-3)) ||
       IVar1 == Nooklings (May 1-5))))) {
    return 1;
  }
  return 0;
}
