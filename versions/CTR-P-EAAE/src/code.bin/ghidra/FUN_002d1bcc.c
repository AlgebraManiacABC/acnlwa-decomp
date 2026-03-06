/**
 * FUN_002d1bcc.c
 * Source line: 370765
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002d1bcc(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  FUN_0020a4cc();
  uVar2 = 0;
  do {
    piVar1 = (int *)(param_1 + 0x74);
    if (uVar2 < 2) {
      piVar1 = (int *)(param_1 + 0x74 + uVar2 * 0x14);
    }
    (**(code **)(*piVar1 + 8))(0x3f800000);
    uVar2 += 1;
  } while ((int)uVar2 < 2);
  return;
}
