/**
 * FUN_0052a764.c
 * Source line: 770249
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0052a764(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*(undefined **)(param_1 + 0xc) == &UNK_00529dfc) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar2 = 0;
    if (param_2 == 1) {
      uVar2 = 0x3f800000;
    }
    uVar1 = FUN_004b4fc0(param_1 + 0x24,&UNK_0085ee44,1);
    FUN_00568630(param_1 + 0x24,param_1 + 0x458,uVar1,0);
    FUN_005697e0(uVar2,param_1 + 0x458);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x24);
  }
  return;
}
