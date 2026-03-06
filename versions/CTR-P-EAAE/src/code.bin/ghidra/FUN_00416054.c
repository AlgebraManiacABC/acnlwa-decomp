/**
 * FUN_00416054.c
 * Source line: 581738
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00416054(void)

{
  int iVar1;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(iRam00974a58 + 0x14) + 0x1f14) != '\0') {
    iVar1 = *(int *)(iRam00974a58 + 0x14) + 0x1f08;
    thunk_FUN_00135748(iVar1);
    (**(code **)(**(int **)(iRam00974a58 + 0x14) + 0x18))();
    *(undefined1 *)(*(int *)(iRam00974a58 + 0x14) + 0x1f14) = 0;
    thunk_FUN_001357ec(iVar1);
  }
  return unaff_r5 & 0xff00 | 5;
}
