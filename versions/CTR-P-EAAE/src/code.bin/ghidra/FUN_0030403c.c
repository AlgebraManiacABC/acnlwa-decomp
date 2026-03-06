/**
 * FUN_0030403c.c
 * Source line: 401132
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0030403c(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 8))(param_1);
      (**(code **)(*param_1 + 0xc))(param_1);
      (**(code **)(*param_1 + 0x10))(param_1);
      (**(code **)(*param_1 + 0x4c))(param_1);
      *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | 1;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}
