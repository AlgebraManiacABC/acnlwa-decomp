/**
 * FUN_00584498.c
 * Source line: 830970
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00584498(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != NULL) {
    if ((*(char *)((int)piVar1 + 5) == '\0') && ((char)piVar1[4] != '\0')) {
      if ((char)piVar1[4] == '\x02') {
          // WARNING: Subroutine does not return
        FUN_00584074();
      }
    }
    else {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined1 *)(piVar1 + 4) = 1;
    *(undefined1 *)((int)piVar1 + 0x19) = 0;
  }
  return;
}
