/**
 * FUN_004cc384.c
 * Source line: 711441
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004cc384(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00902264;
  FUN_004cb870(param_1);
  for (iVar1 = param_1[0x4c]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    if (*(char *)(iVar1 + 0x139) != '\0') {
      FUN_004d3e8c(iVar1);
    }
  }
  for (iVar1 = param_1[0x4c]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    FUN_004d35e8(iVar1);
  }
  param_1[0x4c] = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  FUN_002ffb64(param_1);
  return;
}
