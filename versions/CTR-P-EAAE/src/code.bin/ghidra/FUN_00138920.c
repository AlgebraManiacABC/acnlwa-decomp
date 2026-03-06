/**
 * FUN_00138920.c
 * Source line: 145156
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00138920(int param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = *(int *)(param_1 + 4);
  }
  if (param_2 != 0 && param_1 != 0) {
    do {
      if (param_1 == param_2) {
        return 1;
      }
      param_1 = *(int *)(param_1 + 8);
    } while (param_1 != 0);
  }
  return 0;
}
