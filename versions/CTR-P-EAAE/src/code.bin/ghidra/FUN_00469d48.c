/**
 * FUN_00469d48.c
 * Source line: 635775
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00469d48(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 4;
  }
  else if (param_1 == 1) {
    uVar1 = 3;
  }
  else if (param_1 == 2 || param_1 == 3) {
    uVar1 = 2;
  }
  else {
    FUN_00134250();
  }
  return uVar1;
}
