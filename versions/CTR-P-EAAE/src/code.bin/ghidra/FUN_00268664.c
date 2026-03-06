/**
 * FUN_00268664.c
 * Source line: 313578
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00268664(int param_1,int param_2)

{
  float local_18;
  float local_14;
  float fStack_10;
  
  FUN_0014f394(&local_18,param_2 + 0x14,param_1 + 4);
  if (SQRT(local_18 * local_18 + local_14 * local_14 + fStack_10 * fStack_10) < 16.0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}
