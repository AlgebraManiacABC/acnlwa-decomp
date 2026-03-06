/**
 * FUN_00195ecc.c
 * Source line: 207183
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00195ecc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00251374();
  if (iVar1 == 0) {
    if (DAT_0094fd2b == '\0') {
      *(undefined1 *)(param_1 + 0x6b68) = 0;
      FUN_002f67ac();
      (**(code **)(*(int *)(param_1 + 0x6004) + 0xc))(param_1 + 0x6004);
      FUN_008164d8(param_1 + 0x28,FUN_001950dc,0);
      return;
    }
    FUN_00536f70(_DAT_009500ec);
    FUN_008164d8(param_1 + 0x28,FUN_00195654,0);
  }
  return;
}
