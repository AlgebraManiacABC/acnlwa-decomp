/**
 * FUN_00811a38.c
 * Source line: 1221225
 * Body lines: 13
 */
#include "../../../include/types.h"

FUN_00811a38(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  param_1[1] = param_1 + 3;
  *param_1 = &DAT_0090558c;
  param_1[2] = 0x80;
  *(undefined1 *)(param_1[1] + 0x7f) = 0;
  *param_1 = &UNK_009050bc;
  *(undefined1 *)param_1[1] = 0;
  *param_1 = &UNK_009054b0;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0054af38(param_1,param_2,&uStack_8);
  return param_1;
}
