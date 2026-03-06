/**
 * FUN_0013b80c.c
 * Source line: 148136
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0013b80c(int param_1)

{
  int iVar1;
  
  if (_DAT_00953674 != NULL) {
    (**(code **)(*_DAT_00953674 + 0x10))();
    _DAT_00953674 = NULL;
  }
  uRam00953664 = 0;
  iVar1 = FUN_00137e8c(param_1 + 0x290);
  return iVar1 + -0x290;
}
