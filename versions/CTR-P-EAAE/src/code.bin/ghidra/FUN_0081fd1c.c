/**
 * FUN_0081fd1c.c
 * Source line: 1230995
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_0081fd1c(int param_1)

{
  bool bVar1;
  
  bVar1 = 0 < *(int *)(param_1 + 0x40);
  if (bVar1) {
    FUN_0020a674(param_1);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return bVar1;
}
