/**
 * FUN_0057ef18.c
 * Source line: 825812
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0057ef18(int param_1)

{
  int *piVar1;
  
  FUN_0050c520(*(undefined4 *)(param_1 + 0x564),1);
  (**(code **)(**(int **)(param_1 + 0x564) + 0x10))();
  if (*(char *)(param_1 + 0x11b0) == '\x01') {
    (**(code **)(**(int **)(param_1 + 0x568) + 0x4c))();
    piVar1 = *(int **)(param_1 + 0x568);
    (**(code **)(*piVar1 + 0x54))(piVar1,0);
    piVar1 = *(int **)(param_1 + 0x568);
    (**(code **)(*piVar1 + 0x58))(piVar1,1,0);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x184) = 2;
  return;
}
