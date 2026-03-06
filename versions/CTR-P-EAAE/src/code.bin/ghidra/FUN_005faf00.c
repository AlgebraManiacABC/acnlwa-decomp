/**
 * FUN_005faf00.c
 * Source line: 910983
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005faf00(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_2 + 0x10);
  piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + 0x364);
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 0xc0))
              (piVar1,*puVar2,puVar2[1],*(undefined2 *)(puVar2 + 2),*(undefined2 *)(puVar2 + 4));
  }
  return;
}
