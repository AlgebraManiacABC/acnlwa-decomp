/**
 * FUN_0076c564.c
 * Source line: 1129763
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0076c564(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1 & 0x7fff;
  if ((uVar1 == 0x7c || uVar1 == 0x7d) || (uVar1 == 0x7e || uVar1 == 0x7f)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
