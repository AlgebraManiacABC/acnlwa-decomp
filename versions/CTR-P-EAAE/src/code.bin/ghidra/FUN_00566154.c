/**
 * FUN_00566154.c
 * Source line: 808288
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00566154(void)

{
  if (_DAT_009753e0 != NULL) {
    (**(code **)(*_DAT_009753e0 + 0x1c))();
  }
  if (_DAT_009753e4 != NULL) {
          // WARNING: Could not recover jumptable at 0x0056618c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*_DAT_009753e4 + 0x1c))();
    return;
  }
  return;
}
