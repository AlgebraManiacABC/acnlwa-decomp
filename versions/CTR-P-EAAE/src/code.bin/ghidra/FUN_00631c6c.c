/**
 * FUN_00631c6c.c
 * Source line: 948344
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00631c6c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0xb07) & 1) == 0) {
    (**(code **)(*(int *)(param_1 + 0xb0c) + 0x4c))(param_1 + 0xb0c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x102c);
    if (iVar2 != 0) {
      uVar1 = GET_BYTE_00957322();
      *(undefined1 *)(iVar2 + 0x1c) = uVar1;
    }
  }
  FUN_0057a2e4(param_1);
  return;
}
