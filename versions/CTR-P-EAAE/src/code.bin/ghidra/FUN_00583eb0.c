/**
 * FUN_00583eb0.c
 * Source line: 830696
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00583eb0(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 7) == '\0';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 9);
  }
  if (bVar1 && param_1 == 0) {
    return;
  }
          // WARNING: Subroutine does not return
  FUN_00584074();
}
