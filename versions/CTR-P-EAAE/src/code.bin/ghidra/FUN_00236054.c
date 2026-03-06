/**
 * FUN_00236054.c
 * Source line: 288270
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00236054(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xf0);
  *(undefined1 *)(iVar2 + 0x5cc) = 1;
  FUN_006ea834(0,0x40c00000,iVar2 + 0x78,0,0x1fc,2,0);
  *(undefined1 *)(iVar2 + 0x5cc) = 0;
  FUN_001cd668(iVar2 + 0x5d0,1);
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  uVar1 = FUN_0057ba08(*(int *)(DAT_0094edd8 + 0x1a4) + 0x30,iVar2 + 0x14);
  *(undefined2 *)(param_1 + 0x30) = uVar1;
  return 1;
}
