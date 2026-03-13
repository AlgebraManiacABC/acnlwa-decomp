/**
 * FUN_003b51dc.c
 * Source line: 524847
 * Body lines: 4
 */
#include "../../../include/types.h"

int FUN_003b51dc(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  FUN_00835e1c(param_1 + 8,param_2 + 8);
  return param_1;
}
