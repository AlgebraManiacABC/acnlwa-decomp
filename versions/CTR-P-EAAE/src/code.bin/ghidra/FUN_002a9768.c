/**
 * FUN_002a9768.c
 * Source line: 348040
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002a9768(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x54c;
  FUN_004f26a4(iVar1,*(undefined4 *)(param_1 + 0x56c));
  FUN_004ee9cc(0,iVar1);
  FUN_004ee9a8(0x3f800000,iVar1);
  *(undefined4 *)(param_1 + 0x664) = 0;
  *(undefined4 *)(param_1 + 0x668) = 0x1e;
  *(undefined4 *)(param_1 + 0x66c) = 0;
  *(undefined4 *)(param_1 + 0x670) = 0xf0;
  FUN_002fae84();
  return;
}
