/**
 * FUN_0022c7c8.c
 * Source line: 282894
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0022c7c8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008ebb64;
  iVar1 = FUN_00125e3c(param_1 + 1);
  iVar1 = FUN_00125aec(iVar1 + 0x14c);
  iVar1 = FUN_00125aec(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined1 *)(iVar1 + 0x34) = 0;
  *(undefined1 *)(iVar1 + 0x35) = 1;
  *(undefined **)(iVar1 + -0x178) = &DAT_008ee268;
  iVar1 = FUN_00125aec(iVar1 + 0x38);
  iVar1 = FUN_00125aec(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  return;
}
