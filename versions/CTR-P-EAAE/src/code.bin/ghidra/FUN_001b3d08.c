/**
 * FUN_001b3d08.c
 * Source line: 220638
 * Body lines: 8
 */
#include "../../../include/types.h"

ushort FUN_001b3d08(int param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xf;
  }
  return uVar1 | *(ushort *)(param_1 * 2 + 0x95c010);
}
