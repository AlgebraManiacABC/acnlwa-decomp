/**
 * FUN_0011f220.c
 * Source line: 122137
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0011f220(int param_1)

{
  if ((*(uint *)(param_1 + 8) & 0xfffffffe) != 0) {
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      FUN_00134250();
    }
    FUN_0012ede8(*(uint *)(param_1 + 8) & 0xfffffffe);
    *(uint *)(param_1 + 8) = 0;
  }
  return param_1;
}
