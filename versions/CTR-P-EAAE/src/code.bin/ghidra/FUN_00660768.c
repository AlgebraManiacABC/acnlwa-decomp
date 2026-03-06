/**
 * FUN_00660768.c
 * Source line: 970475
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00660768(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    uVar1 = FUN_002fd068();
    uVar2 = FUN_002fb378();
    iVar3 = FUN_00309bd4(9,uVar2);
    if (iVar3 != 0) {
      FUN_006b80cc(uVar1,1);
      return;
    }
  }
  return;
}
