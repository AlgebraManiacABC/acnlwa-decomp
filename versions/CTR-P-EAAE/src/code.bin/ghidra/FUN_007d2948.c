/**
 * FUN_007d2948.c
 * Source line: 1178727
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_007d2948(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (3 < (uint)(*(int *)(iVar1 + 0x10) - *(int *)(param_1 + 0xc))) {
    puVar2 = (uint *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + *(int *)(param_1 + 0xc));
    *param_2 = *puVar2 & 0xffffff | (uint)*(byte *)((int)puVar2 + 3) << 0x18;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    return 1;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  *param_2 = 0;
  return 0;
}
