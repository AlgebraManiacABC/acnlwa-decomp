/**
 * FUN_006e23dc.c
 * Source line: 1040958
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_006e23dc(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x2760) == 0) &&
     ((((*(uint *)(param_1 + 0x2764) & 1) == 0 || (*(uint *)(param_1 + 0x2764) == 0)) &&
      (iVar1 = FUN_00617110(), iVar1 != 0)))) {
    *(undefined1 *)(param_1 + 0x27c3) = 0;
    *(code **)(param_1 + 0x2760) = FUN_006e2280;
    *(undefined4 *)(param_1 + 0x2764) = 0;
    *(undefined4 *)(param_1 + 0x27a8) = 0;
    *(undefined1 *)(param_1 + 0x27c6) = 0;
    *(undefined1 *)(param_1 + 0x27c4) = 1;
    return 1;
  }
  return 0;
}
