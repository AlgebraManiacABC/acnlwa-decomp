/**
 * FUN_003db62c.c
 * Source line: 551650
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 FUN_003db62c(int param_1,int *param_2)

{
  *(undefined1 *)(*param_2 + 8) = 0;
  *(undefined2 *)(*param_2 + 10) =
       *(undefined2 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 2);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return 0;
}
