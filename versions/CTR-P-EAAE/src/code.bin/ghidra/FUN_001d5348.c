/**
 * FUN_001d5348.c
 * Source line: 238713
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001d5348(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00136e58();
    *(undefined1 *)(param_1 + 0x38) = 5;
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  if ((*(int *)(param_1 + 0x3c) == 0x10000a1) && (iVar1 = GET_BYTE_00957322(), iVar1 == 0x27)) {
    FUN_001d7f24(DAT_0094d080 + 0xb00,0x100079e,0);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  return;
}
