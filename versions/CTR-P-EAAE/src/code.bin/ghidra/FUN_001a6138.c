/**
 * FUN_001a6138.c
 * Source line: 212600
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001a6138(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(8,uVar1);
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0xf3) = 0x10;
    *(undefined1 *)(param_1 + 0x136) = 0;
  }
  return;
}
