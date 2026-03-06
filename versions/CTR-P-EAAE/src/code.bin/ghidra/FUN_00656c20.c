/**
 * FUN_00656c20.c
 * Source line: 965524
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00656c20(int param_1)

{
  int iVar1;
  
  if (((uRam0094deac & 1) == 0) && (iVar1 = FUN_002fe7dc(0x94deac), iVar1 != 0)) {
    uRam009856a5 = 0;
    uRam009856a7 = 0;
  }
  __rt_memcpy((uint *)0x98569c,(uint *)(param_1 + 0x8bc),0x26);
  uRam009856aa = 0;
  uRam009856ae = 0;
  uRam009856b2 = 0;
  uRam009856b6 = 0;
  uRam009856ba = 0;
  uRam009856be = 0;
  return 0x98569c;
}
