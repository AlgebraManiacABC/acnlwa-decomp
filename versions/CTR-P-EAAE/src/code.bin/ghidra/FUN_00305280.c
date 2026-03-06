/**
 * FUN_00305280.c
 * Source line: 403000
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00305280(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else if (param_2 == 1) {
    param_1[1] = 5;
  }
  else if (param_2 == 2) {
    param_1[1] = 0;
    FUN_002fae84();
    return;
  }
  *param_1 = (char)param_2;
  return;
}
