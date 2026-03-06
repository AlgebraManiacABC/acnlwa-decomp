/**
 * FUN_004582fc.c
 * Source line: 622013
 * Body lines: 8
 */
#include "../../../include/types.h"

short FUN_004582fc(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 4) + 1;
  *(short *)(param_1 + 4) = sVar1;
  if (sVar1 == 0) {
    sVar1 = 1;
    *(undefined2 *)(param_1 + 4) = 1;
  }
  return sVar1;
}
