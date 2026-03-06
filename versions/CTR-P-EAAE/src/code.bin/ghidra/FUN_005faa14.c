/**
 * FUN_005faa14.c
 * Source line: 910805
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005faa14(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *local_10;
  
  local_10 = &UNK_00890e52;
  FUN_0060177c(param_1,&local_10,0x95df14);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x8c) + 0x354) + 4);
  uVar2 = (**(code **)(*piVar1 + 0x2a8))(piVar1,0xd);
  FUN_005fd4b8(param_1 + 100,uVar2,param_2);
  uVar3 = FUN_005d46dc();
  if (9 < uVar3) {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(&UNK_008921f0 + uVar3 * 4);
  return;
}
