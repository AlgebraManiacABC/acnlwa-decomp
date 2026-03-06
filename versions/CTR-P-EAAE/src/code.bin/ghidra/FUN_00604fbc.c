/**
 * FUN_00604fbc.c
 * Source line: 920632
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00604fbc(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x554) == '\0') {
    uVar1 = 0;
  }
  else if (*(short *)(param_1 + 0x2e) == *(short *)(param_1 + 0x1d9c)) {
    uVar1 = 1;
  }
  else {
    FUN_006e9be8(0x40c00000,param_1 + 0x78,0,param_1 + 0x1d9c,0x9537c2,0);
    uVar1 = 0;
  }
  return uVar1;
}
