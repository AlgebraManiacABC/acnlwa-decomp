/**
 * FUN_0073e6a4.c
 * Source line: 1096935
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0073e6a4(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x9c) == '\0') {
    uVar1 = 0;
  }
  else if (*(char *)(param_1 + 0x124) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x170);
  }
  return uVar1;
}
