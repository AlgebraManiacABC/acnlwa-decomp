/**
 * FUN_0056e674.c
 * Source line: 815190
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0056e674(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0057b990();
  uVar2 = 0;
  if (iVar1 != 0) {
    if ((*(byte *)(param_1 + 0x7b4) < 2) && (*(byte *)(param_1 + 0x7b4) == 1)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
