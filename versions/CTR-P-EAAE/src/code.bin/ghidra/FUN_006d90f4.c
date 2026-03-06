/**
 * FUN_006d90f4.c
 * Source line: 1035687
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006d90f4(undefined4 param_1)

{
  int iVar1;
  
  if (iRam0095063c != 0) {
    iVar1 = FUN_00305f44();
    if (*(int *)(iRam0095063c + iVar1 * 4 + 0x1c) != 0) {
      iVar1 = FUN_00305f44();
      FUN_001f50ac(*(undefined4 *)(iRam0095063c + iVar1 * 4 + 0x1c),param_1);
      return;
    }
  }
  return;
}
