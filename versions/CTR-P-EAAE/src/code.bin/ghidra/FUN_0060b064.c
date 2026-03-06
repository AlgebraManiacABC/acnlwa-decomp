/**
 * FUN_0060b064.c
 * Source line: 923363
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0060b064(int param_1)

{
  uRam009506f3 = 1;
  uRam009506f2 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x444) + 0xb4) = 0xff;
  FUN_004b9b64(param_1 + 0x280,param_1 + 0x3cc);
  FUN_005697e0(0,param_1 + 0x3cc);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x280);
}
