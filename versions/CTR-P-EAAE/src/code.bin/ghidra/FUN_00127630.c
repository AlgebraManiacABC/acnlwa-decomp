/**
 * FUN_00127630.c
 * Source line: 128874
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00127630(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0016cb60(param_1,param_1 + 0x30,1);
  iVar2 = *(int *)(param_1 + 0x6c);
  FUN_007b1188(*(undefined4 *)(iVar2 + 0x694),0,*(undefined4 *)(iVar2 + 0x69c),
               *(undefined4 *)(iVar2 + 0x6a4),*(undefined4 *)(iVar2 + 0x6a8),0,
               *(undefined1 *)(iVar2 + 0x6a0));
  FUN_00127680();
  uVar1 = uRam00974a84;
  uRam00974a84 = 0;
  return uVar1;
}
