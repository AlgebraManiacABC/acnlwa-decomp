/**
 * FUN_006e4a18.c
 * Source line: 1042369
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006e4a18(int param_1,int param_2)

{
  undefined1 uVar1;
  
  FUN_005664c8();
  if (param_2 == 0) {
    uVar1 = 0xff;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x10) = uVar1;
  return;
}
