/**
 * FUN_002be93c.c
 * Source line: 359241
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_002be93c(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((iVar1 = param_1 + uVar2 * 0x7dd8, (*(byte *)(iVar1 + 0x7dd6) & 1) == 0 ||
         (iVar1 = FUN_002fe940(iVar1 + 0x67de,param_2 + 0x67de), iVar1 == 0))) {
    uVar2 += 1;
    if (0xf < uVar2) {
      return 0;
    }
  }
  if (param_3 != NULL) {
    *param_3 = uVar2;
  }
  return param_1 + uVar2 * 0x7dd8;
}
