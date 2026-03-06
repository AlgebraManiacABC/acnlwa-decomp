/**
 * FUN_007182f0.c
 * Source line: 1071449
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_007182f0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 8) && (iVar1 = FUN_002fcb34(param_1 + param_2 * 4 + 0x14), iVar1 != 0x7c)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
