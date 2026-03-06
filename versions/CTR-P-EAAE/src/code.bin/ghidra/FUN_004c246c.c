/**
 * FUN_004c246c.c
 * Source line: 703898
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_004c246c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  
  if ((*(int *)(*(int *)(param_1 + 4) + 4) != 0) &&
     (uStack_18 = param_4, iVar1 = FUN_00138c88(), iVar1 != 0)) {
    uVar2 = FUN_007409d4(&uStack_18,param_2 + param_3 * 0xc + 0x134,param_2 + param_3 * 0x10 + 0xf4,
                         param_4);
    iVar1 = FUN_004cad5c();
    *(int *)(iVar1 + 0x1fc) = *(int *)(iVar1 + 0x1fc) + 1;
    return uVar2;
  }
  return 0;
}
