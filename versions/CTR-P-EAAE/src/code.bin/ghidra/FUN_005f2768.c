/**
 * FUN_005f2768.c
 * Source line: 904139
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005f2768(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (9 < (**(ushort **)(param_3 + 0x10) & 0xff)) {
    return;
  }
  if (param_4 != 0) {
    *(undefined2 *)(param_1 + 0x6a) = 3;
  }
  uVar1 = (**(code **)(**(int **)(param_2 + 4) + 0x2dc))();
  FUN_005fd4b8(param_1 + 100,uVar1,param_3);
  return;
}
