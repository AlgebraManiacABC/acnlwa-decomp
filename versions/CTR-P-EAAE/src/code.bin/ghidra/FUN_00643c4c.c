/**
 * FUN_00643c4c.c
 * Source line: 956623
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00643c4c(int param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_18 [12];
  
  if (((*(byte *)(param_1 + 0x2d0) < 0xb) &&
      (FUN_0060028c(*(undefined4 *)(param_1 + 0x84),
                    *(undefined4 *)((uint)*(byte *)(param_1 + 0x2d0) * 4 + 0x94da38),0),
      *(char *)(param_1 + 0x2d0) == '\0')) && (*(int *)(param_1 + 0x270) != 0)) {
    puVar1 = (undefined4 *)FUN_005fdf68(auStack_18,*(int *)(param_1 + 0x270) + 0x50,9);
    *puVar1 = &DAT_00908b9c;
    (**(code **)(*(int *)(param_1 + 0x28c) + 0x14))((int *)(param_1 + 0x28c),auStack_18);
  }
  *(undefined1 *)(param_1 + 0x2d0) = 0xb;
  return;
}
