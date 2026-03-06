/**
 * FUN_002d6f40.c
 * Source line: 374543
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_002d6f40(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_001e7e10();
  if ((iVar1 == 0) || ((char)param_1[0x74] == '\0')) {
    *(undefined1 *)(param_1 + 0x74) = 1;
    FUN_00521a18(param_1);
    (**(code **)(*param_1 + 0x54))(param_1);
    (**(code **)(*param_1 + 0x5c))(param_1);
    (**(code **)(*param_1 + 0x60))(param_1);
    (**(code **)(*param_1 + 100))(param_1);
    thunk_FUN_004ee4b8(param_1 + 0x2d);
  }
  return 2;
}
