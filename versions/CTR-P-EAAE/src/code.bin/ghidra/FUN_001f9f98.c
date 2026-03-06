/**
 * FUN_001f9f98.c
 * Source line: 259076
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001f9f98(int param_1)

{
  *(undefined1 *)(param_1 + 0x4d0) = 1;
  if (*(char *)(param_1 + 1000) != '\0') {
    FUN_00569420(param_1 + 0x38,param_1 + 0x3cc);
  }
  FUN_004b9b64(param_1 + 0x38);
  FUN_005697e0(0,param_1 + 0x41c);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x38);
}
