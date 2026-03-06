/**
 * FUN_006da718.c
 * Source line: 1036488
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_006da718(int param_1)

{
  if (iRam0095063c != 0) {
    if (DAT_00950644 != NULL) {
      (**(code **)(*DAT_00950644 + 8))();
    }
    if (*(int **)(param_1 + 0x30) != NULL) {
      (**(code **)(**(int **)(param_1 + 0x30) + 8))();
    }
    if (piRam00950640 != NULL) {
      (**(code **)(*piRam00950640 + 8))();
    }
    piRam00950640 = NULL;
    FUN_002f747c(param_1 + 0x14);
    iRam0095063c = 0;
  }
  return 2;
}
