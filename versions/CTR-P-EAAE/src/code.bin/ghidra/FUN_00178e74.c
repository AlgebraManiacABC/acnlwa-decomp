/**
 * FUN_00178e74.c
 * Source line: 193077
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00178e74(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00139c30();
  if (iVar1 == 0xb) {
    iVar1 = FUN_0013d138();
    *(undefined4 *)(iVar1 + 200) = 5;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(code **)(param_1 + 0xc) = FUN_0013fc6c;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_0013fc6c(param_1);
  return;
}
