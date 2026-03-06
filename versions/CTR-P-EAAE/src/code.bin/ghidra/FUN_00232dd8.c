/**
 * FUN_00232dd8.c
 * Source line: 287005
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00232dd8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xf0);
  *(undefined1 *)(iVar2 + 0x5cc) = 1;
  if (*(char *)(param_1 + 0x32) == '\0') {
    uVar1 = 0x105;
  }
  else {
    uVar1 = 0x10f;
  }
  FUN_006ea834(0,0x40c00000,iVar2 + 0x78,0,uVar1,2,0);
  *(undefined1 *)(iVar2 + 0x5cc) = 0;
  uVar1 = FUN_00305f44();
  FUN_0018f6a0(_DAT_0094f3bc,uVar1,iVar2,8);
  return 1;
}
