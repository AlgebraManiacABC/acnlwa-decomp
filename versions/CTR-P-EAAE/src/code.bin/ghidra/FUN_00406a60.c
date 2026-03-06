/**
 * FUN_00406a60.c
 * Source line: 573654
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00406a60(int param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  *(undefined1 *)(param_1 + 0x4f4) = 1;
  local_10 = 0;
  uStack_c = 0;
  FUN_004287d4(&local_10);
  *(undefined4 *)(param_1 + 0x4f8) = local_10;
  *(undefined4 *)(param_1 + 0x4fc) = uStack_c;
  return;
}
