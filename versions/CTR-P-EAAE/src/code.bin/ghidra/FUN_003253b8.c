/**
 * FUN_003253b8.c
 * Source line: 427072
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_003253b8(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ee524();
  if (iVar1 == 1) {
    FUN_00521a18();
    (**(code **)(*param_1 + 0x4c))(param_1);
    thunk_FUN_004ee4b8(param_1 + 0x17);
    return 2;
  }
  return 2;
}
