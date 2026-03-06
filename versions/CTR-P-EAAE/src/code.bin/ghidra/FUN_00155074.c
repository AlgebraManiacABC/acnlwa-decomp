/**
 * FUN_00155074.c
 * Source line: 168741
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00155074(byte *param_1)

{
  undefined4 uVar1;
  
  if (((*param_1 & 0x10) == 0) && ((*param_1 & 0x40) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
