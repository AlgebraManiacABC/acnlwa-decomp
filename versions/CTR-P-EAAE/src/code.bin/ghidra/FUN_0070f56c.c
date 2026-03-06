/**
 * FUN_0070f56c.c
 * Source line: 1066542
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0070f56c(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((((*(ushort *)(param_1 + 0x22) & 1) == 0) ||
      (uVar2 = FUN_003506c8(0x863), *(int *)(param_1 + 8) != (int)uVar2)) ||
     (*(int *)(param_1 + 4) != (int)((ulonglong)uVar2 >> 0x20))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
