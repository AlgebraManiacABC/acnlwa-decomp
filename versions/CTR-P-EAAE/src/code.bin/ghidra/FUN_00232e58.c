/**
 * FUN_00232e58.c
 * Source line: 287028
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00232e58(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  iVar1 = *(int *)(param_2 + 0xf0);
  *(undefined1 *)(iVar1 + 0x5cc) = 1;
  FUN_006ea834(0,0x40c00000,iVar1 + 0x78,0,0x116,2,0);
  *(undefined1 *)(iVar1 + 0x5cc) = 0;
  return 1;
}
