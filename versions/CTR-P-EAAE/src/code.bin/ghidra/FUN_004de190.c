/**
 * FUN_004de190.c
 * Source line: 723645
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_004de190(Item_t *param_1)

{
  int iVar1;
  
  iVar1 = FUN_002fcb34();
  if (iVar1 == 0x39) {
    iVar1 = Item_GetRawID(param_1);
    if (iVar1 != 0x2283) {
      return 1;
    }
  }
  else if (iVar1 == 0x75 || iVar1 == 0x76) {
    return 1;
  }
  return 0;
}
