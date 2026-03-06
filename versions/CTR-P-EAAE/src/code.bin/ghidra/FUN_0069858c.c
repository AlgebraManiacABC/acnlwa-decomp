/**
 * FUN_0069858c.c
 * Source line: 1000036
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0069858c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xeb54);
  while( true ) {
    if (piVar2 == *(int **)(param_1 + 0xeb58)) {
      return 0;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(byte *)(iVar1 + 0x95e) == param_2)) break;
    piVar2 = piVar2 + 1;
  }
  *(undefined4 *)(iVar1 + 0x938) = param_3;
  return 1;
}
