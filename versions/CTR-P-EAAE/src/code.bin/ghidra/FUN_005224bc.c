/**
 * FUN_005224bc.c
 * Source line: 765576
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined2 FUN_005224bc(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) <= param_2) {
    FUN_005224e8(param_1);
  }
  return *(undefined2 *)(*(int *)(param_1 + 0xc) + param_2 * 2);
}
