/**
 * FUN_00234d40.c
 * Source line: 288043
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00234d40(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xf0);
  *(undefined1 *)(iVar2 + 0x5cc) = 1;
  FUN_006ea834(0,0x40c00000,iVar2 + 0x78,0,0x115,2,0);
  *(undefined1 *)(iVar2 + 0x5cc) = 0;
  uVar1 = FUN_00305f44();
  FUN_0018f6a0(_DAT_0094f3bc,uVar1,iVar2,8);
  return 1;
}
