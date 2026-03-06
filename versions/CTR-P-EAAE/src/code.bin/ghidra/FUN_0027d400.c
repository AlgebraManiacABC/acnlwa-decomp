/**
 * FUN_0027d400.c
 * Source line: 325306
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0027d400(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0057b990();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_0025286c(_DAT_0094f268,*(undefined1 *)((int)param_1 + 0x116),0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0xc4))(param_1);
    }
    uVar2 = 1;
  }
  return uVar2;
}
