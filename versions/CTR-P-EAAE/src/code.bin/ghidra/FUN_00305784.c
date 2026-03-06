/**
 * FUN_00305784.c
 * Source line: 403385
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00305784(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00568630(param_1 + 0x294,param_1 + 0x430,*(undefined4 *)(param_1 + 0x275c),0);
    FUN_005697e0(0,param_1 + 0x430);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x294);
  }
  FUN_00568630(param_1 + 0x294,param_1 + 0x430,*(undefined4 *)(param_1 + 0x275c),0);
  FUN_005697e0(0x3f800000,param_1 + 0x430);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x294);
}
