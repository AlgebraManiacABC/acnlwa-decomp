/**
 * FUN_007d28e8.c
 * Source line: 1178708
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_007d28e8(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0x10) != *(int *)(param_1 + 0xc)) {
    *param_2 = *(undefined1 *)
                (*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + *(int *)(param_1 + 0xc));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return 1;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  *param_2 = 0;
  return 0;
}
