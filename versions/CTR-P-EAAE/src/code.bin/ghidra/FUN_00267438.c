/**
 * FUN_00267438.c
 * Source line: 313043
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00267438(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    FUN_00267188(param_1);
    FUN_00569420(param_1 + 0x9c,param_1 + 0x2ef);
    FUN_004b9b64(param_1 + 0x29c);
    FUN_005697e0((float)(uint)param_1[0x617],param_1 + 0x32b);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x29c);
  }
  FUN_00569544(param_1 + 0x2ef);
  *(undefined1 *)((int)param_1 + 0x392) = 1;
  return;
}
