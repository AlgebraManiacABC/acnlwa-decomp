/**
 * FUN_006ae654.c
 * Source line: 1008487
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006ae654(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_001cb474(param_1 + 0x9fc);
  if (iVar1 != 0) {
    *(byte *)(*(int *)(param_1 + 0x634c) + 0xb7) =
         *(byte *)(*(int *)(param_1 + 0x634c) + 0xb7) & 0xfe;
    FUN_0081b538(param_1,FUN_006af364,0);
  }
  return;
}
