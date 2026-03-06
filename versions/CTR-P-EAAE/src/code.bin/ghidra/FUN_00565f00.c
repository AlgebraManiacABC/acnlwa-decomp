/**
 * FUN_00565f00.c
 * Source line: 808202
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_00565f00(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (_DAT_009753e0 != NULL) {
    _DAT_009753e0[2] = param_1;
    iVar1 = (**(code **)(*_DAT_009753e0 + 0x10))();
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (_DAT_009753e4 == NULL) {
    return iVar1;
  }
  _DAT_009753e4[2] = param_1;
          // WARNING: Could not recover jumptable at 0x00565f68. Too many branches
          // WARNING: Treating indirect jump as call
  iVar1 = (**(code **)(*_DAT_009753e4 + 0x10))();
  return iVar1;
}
