/**
 * FUN_004ee9cc.c
 * Source line: 736636
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004ee9cc(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  uVar2 = (**(code **)(iVar1 + 0x4c))
                    (*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48),param_1,
                     *(undefined4 *)(iVar1 + 0x50));
  *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(iVar1 + 0x38) = uVar2;
  *(undefined1 *)(iVar1 + 0x58) = 1;
  return;
}
