/**
 * FUN_006c48f4.c
 * Source line: 1023379
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006c48f4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006158c4();
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(iVar1 + *(char *)(param_1 + 0xc) * 0x14 + 0x18);
  if (param_2 < 2) {
    uVar2 = 0x10;
  }
  else {
    uVar2 = 0x18;
  }
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}
