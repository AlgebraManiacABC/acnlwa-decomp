/**
 * FUN_006af00c.c
 * Source line: 1008802
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006af00c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_001cb474(param_1 + 0xe30);
  if (iVar1 != 0) {
    *(byte *)(*(int *)(param_1 + 0x6344) + 0xb7) =
         *(byte *)(*(int *)(param_1 + 0x6344) + 0xb7) & 0xfe;
    FUN_0081b538(param_1,FUN_006aeb10,0);
  }
  return;
}
