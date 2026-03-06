/**
 * FUN_00579024.c
 * Source line: 822168
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined2 FUN_00579024(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_005c33cc(param_2,0,param_3,param_4,param_4);
  if (iVar2 == 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x2e);
  }
  else {
    uVar1 = FUN_0057ba08(param_1 + 0x14,iVar2 + 0x14);
  }
  return uVar1;
}
