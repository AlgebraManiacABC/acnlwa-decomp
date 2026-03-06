/**
 * FUN_00677cc0.c
 * Source line: 982548
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00677cc0(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_2 + 1);
  iVar2 = FUN_0064f390((uint)bVar1);
  if ((iVar2 != 0) && ((int)((uint)*(byte *)(iVar2 + 7) << 0x1c) < 0)) {
          // WARNING: Could not recover jumptable at 0x00677d10. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(&UNK_0084364c + (uint)bVar1 * 0x1c))(param_1,param_2);
    return;
  }
  return;
}
