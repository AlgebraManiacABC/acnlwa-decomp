/**
 * FUN_00747438.c
 * Source line: 1103327
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00747438(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x155) == '\0') || (param_2 != 0)) {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
