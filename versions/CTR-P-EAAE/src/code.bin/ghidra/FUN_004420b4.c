/**
 * FUN_004420b4.c
 * Source line: 607166
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined1 FUN_004420b4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(iRam0097d428 + 0x14);
  uVar2 = 0;
  if (*(uint *)(iVar1 + 0x88) != 0) {
    do {
      if (*(int *)(*(int *)(iVar1 + 0x70) + uVar2 * 0x54 + 0x18) == param_2) {
        return *(undefined1 *)(*(int *)(iVar1 + 0x74) + uVar2);
      }
      uVar2 += 1;
    } while (uVar2 < *(uint *)(iVar1 + 0x88));
  }
  return 0xfd;
}
