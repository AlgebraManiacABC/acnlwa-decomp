/**
 * FUN_00729448.c
 * Source line: 1082460
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00729448(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else if (param_2 == 10) {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  return uVar1;
}
