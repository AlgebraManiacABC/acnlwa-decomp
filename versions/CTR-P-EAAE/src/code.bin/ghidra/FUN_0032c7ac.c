/**
 * FUN_0032c7ac.c
 * Source line: 431876
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0032c7ac(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008f54e4;
  if (*(char *)(param_1 + 0xd) != '\0') {
    if (param_1[0x26] != 0) {
      FUN_002e9954(param_1 + 0x24);
    }
    FUN_002d27e0(param_1);
  }
  iVar1 = FUN_002e9a14(param_1 + 0x24);
  FUN_002d2b90(iVar1 + -0x90);
  FUN_002ffb64();
  return;
}
