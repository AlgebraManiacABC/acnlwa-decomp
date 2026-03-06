/**
 * FUN_0054a230.c
 * Source line: 790746
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0054a230(int *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_0011ef18();
          // WARNING: Could not recover jumptable at 0x0056056c. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piRam00975320 + 0x14))(0x3f800000,piRam00975320,7,param_1 + 0x1d,0);
  return;
}
