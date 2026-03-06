/**
 * FUN_0060c284.c
 * Source line: 923914
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0060c284(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x418) = 0;
  iVar1 = FUN_006d1e64();
  if (*(char *)(*(int *)(iVar1 + 500) + 0x4d1) == '\x01') {
    iVar1 = FUN_006d1e64();
    FUN_001fa354(*(undefined4 *)(iVar1 + 500));
    return;
  }
  return;
}
