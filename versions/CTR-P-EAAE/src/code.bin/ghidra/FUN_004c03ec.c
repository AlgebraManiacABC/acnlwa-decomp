/**
 * FUN_004c03ec.c
 * Source line: 702325
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_004c03ec(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004bfc7c();
  *puVar1 = &UNK_00901ed0;
  puVar1[0x47] = 0;
  iVar2 = FUN_004c92fc(puVar1 + 0x48);
  *(undefined4 *)(iVar2 + 0x44) = 0xe7e3ffff;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined1 *)(iVar2 + 0x54) = param_2;
  FUN_0012f154();
  return iVar2 + -0x120;
}
