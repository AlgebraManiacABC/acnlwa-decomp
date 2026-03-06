/**
 * FUN_001a97a0.c
 * Source line: 214141
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001a97a0(int param_1)

{
  undefined4 uVar1;
  
  FUN_006d2780();
  _DAT_009ab068 = 0xffffffff;
  _DAT_009ab06c = 0xffffffff;
  _DAT_009ab070 = 0;
  _DAT_009ab074 = 0;
  DAT_009ab080 = 1;
  uVar1 = FUN_0056878c(param_1 + 0x1030,"N_wait_pos_00");
  FUN_004b6dc8(uVar1,*(undefined4 *)(param_1 + 0x119c));
  FUN_00132364(param_1 + 0x12c8);
          // WARNING: Subroutine does not return
  FUN_001323b4(param_1 + 0x1030);
}
