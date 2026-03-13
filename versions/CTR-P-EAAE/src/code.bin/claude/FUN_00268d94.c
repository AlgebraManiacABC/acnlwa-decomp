/**
 * FUN_00268d94.c
 * Source line: 313873
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00268d94(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x3fc) = param_2;
  iVar1 = FUN_004f1328(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(iVar1 + 8);
  return;
}
