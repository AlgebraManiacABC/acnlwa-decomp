/**
 * FUN_003997b4.c
 * Source line: 504095
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_003997b4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_003cc040();
  iVar1 = FUN_003cd24c();
  iVar1 = FUN_00391588(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    local_20 = *param_3;
    uStack_1c = param_3[1];
    uStack_18 = param_3[2];
    FUN_00356510(iVar1,param_2,&local_20,1);
  }
  return;
}
