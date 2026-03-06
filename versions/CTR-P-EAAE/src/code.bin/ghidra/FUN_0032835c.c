/**
 * FUN_0032835c.c
 * Source line: 428657
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0032835c(int param_1)

{
  FUN_002b9160();
  if (*(char *)(param_1 + 0x368) != '\0') {
    FUN_00569544(param_1 + 0x36c);
    *(undefined1 *)(param_1 + 0x256) = 1;
  }
  if (*(char *)(param_1 + 0x256) != '\0') {
          // WARNING: Could not recover jumptable at 0x003283a0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)(param_1 + 0x134) + 0xc))();
    return;
  }
  return;
}
