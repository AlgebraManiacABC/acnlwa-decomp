/**
 * FUN_00273a30.c
 * Source line: 320118
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00273a30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0071ee8c(param_1 + 0x458);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x2bf0) = 0;
    FUN_00817cd8(param_1,&UNK_00273a1c,0);
  }
  return;
}
