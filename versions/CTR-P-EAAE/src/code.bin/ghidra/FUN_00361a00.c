/**
 * FUN_00361a00.c
 * Source line: 465989
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_00361a00(undefined4 *param_1)

{
  *param_1 = &UNK_008fb770;
  param_1[1] = &UNK_008fe9d0;
  FUN_003548f0(param_1 + 2,&UNK_0089a14c);
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = &UNK_008fe9d0;
  FUN_003548f0(param_1 + 5,&UNK_0089a14c);
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}
