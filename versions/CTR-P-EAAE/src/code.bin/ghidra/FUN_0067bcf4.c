/**
 * FUN_0067bcf4.c
 * Source line: 984413
 * Body lines: 11
 */
#include "../../../include/types.h"

byte FUN_0067bcf4(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x1a9) < 0xeb) && (iVar2 = FUN_0064f390(), iVar2 != 0)) {
    bVar1 = *(byte *)(iVar2 + 7) & 1;
    if ((*(byte *)(iVar2 + 7) & 1) != 0) {
      FUN_001ac668(param_1 + 0x1b8,param_2,param_3,param_4,param_5);
      bVar1 = 1;
    }
    return bVar1;
  }
  return 0;
}
