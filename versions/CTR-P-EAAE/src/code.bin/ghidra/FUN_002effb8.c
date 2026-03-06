/**
 * FUN_002effb8.c
 * Source line: 385938
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002effb8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00251374();
  if (iVar1 == 0) {
    if (DAT_0094fd2b == '\0') {
      FUN_008197fc(param_1 + 0x28,&UNK_002efae8,0);
      return;
    }
    iVar1 = FUN_006d1e64();
    *(undefined1 *)(iVar1 + 0x40) = 0;
    FUN_008197fc(param_1 + 0x28,FUN_002eec98,0);
  }
  return;
}
