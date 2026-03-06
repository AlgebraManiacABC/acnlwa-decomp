/**
 * FUN_00768738.c
 * Source line: 1126159
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00768738(Item_t *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00305630(param_1);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) >> 2;
  }
  return iVar1;
}
