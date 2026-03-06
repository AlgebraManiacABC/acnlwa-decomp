/**
 * FUN_007d29b8.c
 * Source line: 1178747
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_007d29b8(int param_1,undefined2 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (1 < (uint)(*(int *)(iVar1 + 0x10) - *(int *)(param_1 + 0xc))) {
    *param_2 = *(undefined2 *)
                (*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + *(int *)(param_1 + 0xc));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
    return 1;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  *param_2 = 0;
  return 0;
}
