/**
 * FUN_00681134.c
 * Source line: 987201
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00681134(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x1ac);
  uVar2 = *(undefined1 *)(param_1 + 0x8ca);
  uVar3 = FUN_005c0f50();
  FUN_005c00f0(uVar3,uVar1,uVar2);
  *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) & 0xf7;
  *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xfe;
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0xf7;
  FUN_001aba5c(param_1);
  FUN_001abb7c(param_1);
  return;
}
