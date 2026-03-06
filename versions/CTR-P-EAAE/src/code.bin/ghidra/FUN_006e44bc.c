/**
 * FUN_006e44bc.c
 * Source line: 1042038
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_006e44bc(int param_1,uint param_2)

{
  FUN_0013f000(0x9ab57c,(cro_container *)(param_1 + 0x48));
  *(uint *)(param_1 + 0x54) = param_2 & 0x3ffff | (uint)*(ushort *)(param_1 + 0xc) << 0x12;
  FUN_005bf748(0x9ab57c,param_1 + 0x48);
  return;
}
