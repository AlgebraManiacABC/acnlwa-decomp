/**
 * FUN_006c47d0.c
 * Source line: 1023300
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006c47d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_006158c4();
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(iVar1 + *(char *)(param_1 + 0xc) * 0x14 + 0x18);
  *(int *)(param_1 + 8) = param_2 * 0x1e;
  return;
}
