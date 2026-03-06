/**
 * FUN_0057f138.c
 * Source line: 825904
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0057f138(int param_1)

{
  int iVar1;
  
  FUN_002cd2c0(*(int *)(param_1 + 0x58c) + 0x398);
  if (DAT_0095e0cb == '\x10') {
    iVar1 = FUN_007580f0(iRam0094fbc0 + 0x118);
    if (iVar1 != 0) {
      FUN_002da33c(*(undefined4 *)(iRam0094fbc0 + 0x50));
      return;
    }
  }
  return;
}
