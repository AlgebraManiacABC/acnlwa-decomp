/**
 * FUN_0073bd9c.c
 * Source line: 1095341
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0073bd9c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0xc) != NULL) {
          // WARNING: Could not recover jumptable at 0x0073bdb8. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    return uVar1;
  }
  if (((uRam009822a4 & 1) == 0) && (iVar2 = FUN_002fe7dc(0x9822a4), iVar2 != 0)) {
    uVar1 = FUN_0047de14();
    FUN_0013451c(0xaf807c,uVar1);
    uRam00af80ac = 0x3f800000;
    uRam00af80b0 = 0x3f800000;
    uRam00af80b4 = 0x3f800000;
    uRam00af80b8 = 0x7e1;
  }
  return 0xaf807c;
}
