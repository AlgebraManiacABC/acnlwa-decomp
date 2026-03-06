/**
 * FUN_006a273c.c
 * Source line: 1002003
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006a273c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0062624c();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(DAT_0095deac + 0x14);
    FUN_00601f20(uVar2,0);
    if (iVar1 < 1) {
      FUN_0081b324(param_1 + 0x90,FUN_006a21a4,0);
      return;
    }
    FUN_00603e64(uVar2);
    FUN_0081b324(param_1 + 0x90,&UNK_006a2a04,0);
  }
  return;
}
