/**
 * FUN_00624b44.c
 * Source line: 938328
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00624b44(undefined1 *param_1,undefined1 param_2,char param_3)

{
  bool in_ZR;
  
  if (!in_ZR) {
    param_3 = param_1[1];
    in_ZR = param_3 == '\0';
  }
  if (!in_ZR) {
    *param_1 = param_2;
    param_1[1] = param_3 + -1;
  }
  return;
}
