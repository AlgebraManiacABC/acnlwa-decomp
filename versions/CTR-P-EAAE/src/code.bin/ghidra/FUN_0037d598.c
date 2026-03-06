/**
 * FUN_0037d598.c
 * Source line: 486437
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0037d598(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_0035b994(&local_18);
  *(undefined4 *)(param_1 + 0x40) = local_18;
  *(undefined4 *)(param_1 + 0x44) = uStack_14;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0xc);
  return;
}
