/**
 * FUN_00292e74.c
 * Source line: 336238
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00292e74(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    FUN_00568984(param_1 + 0x6c,param_1 + 0x54c,*(undefined4 *)(param_1 + 0x6f0),0);
    FUN_0081831c(param_1 + 0x14,&UNK_00291608,0);
    return;
  }
  FUN_00569544(param_1 + 0x54c);
  *(undefined1 *)(param_1 + 0x18e) = 1;
  return;
}
