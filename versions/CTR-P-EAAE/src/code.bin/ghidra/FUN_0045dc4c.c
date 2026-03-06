/**
 * FUN_0045dc4c.c
 * Source line: 626168
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0045dc4c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar1 = 0xe0a1482b;
  }
  else if (*(char *)(param_1 + 0x15) == '\0') {
    uVar1 = 0xe0a14827;
  }
  else {
    FUN_0045cfb0(param_1);
    FUN_0045d408(param_1);
    uVar1 = 0;
  }
  return uVar1;
}
