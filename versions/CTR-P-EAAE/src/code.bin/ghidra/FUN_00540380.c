/**
 * FUN_00540380.c
 * Source line: 784631
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00540380(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined *local_10;
  undefined *local_c;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x28);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = param_2;
  local_c = &DAT_005403c0;
  local_10 = &DAT_009047f8;
  FUN_00137c78(param_1,*(undefined4 *)(param_1 + 0x2c),&local_10);
  return uVar1;
}
