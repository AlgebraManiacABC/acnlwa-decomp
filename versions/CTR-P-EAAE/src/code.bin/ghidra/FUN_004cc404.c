/**
 * FUN_004cc404.c
 * Source line: 711464
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_004cc404(undefined4 *param_1)

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
  return param_1;
}
