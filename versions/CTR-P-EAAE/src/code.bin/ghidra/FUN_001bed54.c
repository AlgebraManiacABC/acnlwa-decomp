/**
 * FUN_001bed54.c
 * Source line: 226122
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_001bed54(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0010c6b0();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00308340();
    iVar1 = FUN_00755cd0(uVar2,(int)*(char *)(param_1 + 0x1de8));
    if (iVar1 != 0) {
      uVar2 = FUN_00308340();
      FUN_005b4eb0(uVar2,(int)*(char *)(param_1 + 0x1de8));
    }
    uVar2 = 1;
  }
  return uVar2;
}
