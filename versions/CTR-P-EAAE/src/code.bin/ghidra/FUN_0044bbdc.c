/**
 * FUN_0044bbdc.c
 * Source line: 612632
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0044bbdc(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 100) == 0) {
    cVar1 = FUN_00440130(*(undefined4 *)(param_1 + 0xc));
  }
  else {
    cVar1 = FUN_00440314();
  }
  if (cVar1 != '\x05') {
          // WARNING: Could not recover jumptable at 0x0044bc24. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),0);
    return;
  }
  return;
}
