/**
 * FUN_00269478.c
 * Source line: 314139
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00269478(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008ef334;
  iVar1 = FUN_0026a66c(param_1 + 1);
  *(undefined4 *)(iVar1 + 0x3f8) = 0;
  *(undefined1 *)(iVar1 + 0x3fc) = 0;
  *(undefined1 *)(iVar1 + 0x3fd) = 0;
  *(undefined2 *)(iVar1 + 0x3fe) = 0;
  *(undefined2 *)(iVar1 + 0x400) = 0;
  *(undefined1 *)(iVar1 + 0x402) = 0;
  *(undefined1 *)(iVar1 + 0x403) = 0;
  return;
}
