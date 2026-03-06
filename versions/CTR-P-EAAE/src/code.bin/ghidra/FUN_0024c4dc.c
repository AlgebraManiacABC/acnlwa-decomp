/**
 * FUN_0024c4dc.c
 * Source line: 300061
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0024c4dc(int param_1,uint param_2)

{
  undefined4 auStack_70 [26];
  
  if ((param_2 < 0x19) && ((*(uint *)(param_1 + 0x4c) & 1 << (param_2 & 0xff)) == 0)) {
    FUN_0024c71c(param_1,auStack_70);
    return auStack_70[param_2];
  }
  return 0;
}
