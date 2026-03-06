/**
 * FUN_0031e594.c
 * Source line: 422847
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0031e594(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_1 + 0x3c4) = param_3;
  *(undefined4 *)(param_1 + 0x4e0) = *param_4;
  *(undefined4 *)(param_1 + 0x4e4) = param_4[1];
  *(undefined4 *)(param_1 + 0x4e8) = param_4[2];
  FUN_005e2e50();
  FUN_005e2f94(param_1 + 0x41c);
  if (*(char *)(param_1 + 0x4ec) != '\0') {
    FUN_0031e228(param_1);
    FUN_0031e314(param_1);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x270);
  }
  FUN_00819f50(param_1,FUN_0031e610,0);
  return;
}
