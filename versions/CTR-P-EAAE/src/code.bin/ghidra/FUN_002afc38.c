/**
 * FUN_002afc38.c
 * Source line: 351499
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002afc38(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&UNK_0084a99c;
  if ((DAT_0094fd58 & 0x20) == 0) {
    iVar1 = FUN_00251374();
    if (iVar1 == 0) {
      return;
    }
    puVar2 = (undefined4 *)&UNK_0084a9d4;
  }
  FUN_0081863c(param_1 + 0x28,*puVar2,puVar2[1]);
  return;
}
