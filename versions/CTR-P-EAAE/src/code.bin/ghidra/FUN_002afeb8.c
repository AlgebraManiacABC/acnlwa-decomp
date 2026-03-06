/**
 * FUN_002afeb8.c
 * Source line: 351532
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002afeb8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&UNK_0084a99c;
  if ((DAT_0094fd58 & 0x20) == 0) {
    iVar1 = FUN_00251374();
    if (iVar1 != 0) {
      return;
    }
    FUN_002f67ac();
    (**(code **)(*(int *)(param_1 + 0x96a0) + 0xc))((int *)(param_1 + 0x96a0));
    puVar2 = (undefined4 *)&UNK_0084a9b4;
  }
  FUN_0081863c(param_1 + 0x28,*puVar2,puVar2[1]);
  return;
}
