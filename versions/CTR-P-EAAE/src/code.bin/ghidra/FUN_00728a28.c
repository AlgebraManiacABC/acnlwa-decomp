/**
 * FUN_00728a28.c
 * Source line: 1081904
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_00728a28(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = param_2 <= *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x30) <= param_2) {
    bVar1 = *(uint *)(param_1 + 0x34) <= param_2;
  }
  return !bVar1;
}
