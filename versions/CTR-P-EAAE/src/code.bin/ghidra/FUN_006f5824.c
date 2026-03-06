/**
 * FUN_006f5824.c
 * Source line: 1051533
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006f5824(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006d1e64();
  if (*(char *)(iVar1 + 0x40) == '\x01') {
    iVar1 = FUN_006d1e64();
    FUN_001fa354(*(undefined4 *)(iVar1 + 500));
    iVar1 = FUN_006d1e64();
    *(undefined1 *)(iVar1 + 0x40) = 0;
  }
  *(uint *)(param_1 + 0xe30) = *(uint *)(param_1 + 0xe30) | 8;
  uVar2 = FUN_004b4fc0(param_1 + 0x26c,"G_inout",1);
  FUN_00568630(param_1 + 0x26c,param_1 + 0x3e0,uVar2,0);
  FUN_005697e0(0,param_1 + 0x3e0);
  return;
}
