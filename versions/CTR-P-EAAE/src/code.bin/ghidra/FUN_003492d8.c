/**
 * FUN_003492d8.c
 * Source line: 446084
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_003492d8(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = uVar2 & 0xfffffffe;
  piVar1 = (int *)(uVar2 & 0xfffffffe);
  if (piVar1 != NULL) {
          // WARNING: Could not recover jumptable at 0x003476e0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 0x14))();
    return;
  }
  return;
}
