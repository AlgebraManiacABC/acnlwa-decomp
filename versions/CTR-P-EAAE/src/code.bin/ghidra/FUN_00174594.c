/**
 * FUN_00174594.c
 * Source line: 189734
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00174594(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00139c30();
  if (iVar1 != 0) {
    iVar1 = FUN_0013d138();
    *(undefined4 *)(iVar1 + 200) = 5;
    return;
  }
  FUN_0013d1cc(param_1,uRam0097519c,0xc820,0,1,FUN_0016c4ac);
  return;
}
