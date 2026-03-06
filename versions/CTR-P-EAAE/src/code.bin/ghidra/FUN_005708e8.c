/**
 * FUN_005708e8.c
 * Source line: 816496
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_005708e8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057278c();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x5f8) = 6;
  }
  return iVar1 != 0;
}
