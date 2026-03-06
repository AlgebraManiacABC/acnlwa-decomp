/**
 * FUN_001fea08.c
 * Source line: 260327
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001fea08(int param_1)

{
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  FUN_0029977c(param_1 + 0x1268);
  if (*(char *)(param_1 + 0x1962) != '\0') {
    FUN_002cb8e4(param_1 + 0x480);
  }
  *(bool *)(param_1 + 0x29) = *(char *)(param_1 + 0x1962) != '\0';
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x484);
}
