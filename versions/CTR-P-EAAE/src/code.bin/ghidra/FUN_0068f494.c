/**
 * FUN_0068f494.c
 * Source line: 995374
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0068f494(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_1 + 0x1a8) != 0;
  if (bVar2) {
    iVar1 = param_1 + 0xdc;
  }
  else {
    iVar1 = param_1 + 0x14;
  }
  FUN_004ee364(iVar1,bVar2);
  (**(code **)(**(int **)(param_1 + 0x1a4) + 0x14))();
  if (*(int **)(param_1 + 0x1a8) != NULL) {
    (**(code **)(**(int **)(param_1 + 0x1a8) + 0x14))();
  }
  return 2;
}
