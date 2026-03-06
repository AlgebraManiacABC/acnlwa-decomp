/**
 * FUN_003d07f4.c
 * Source line: 542343
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_003d07f4(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_2 + 0x1d);
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x28))(*(int **)(param_1 + 0x3c),cVar1);
  }
  uVar2 = FUN_003d0738(param_1,*(int *)(param_2 + 0x18) + *(int *)(param_2 + 0xc),
                       *(undefined4 *)(param_2 + 0x10),param_3);
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x28))(*(int **)(param_1 + 0x3c),0x40);
  }
  return uVar2;
}
