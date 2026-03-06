/**
 * FUN_0013f28c.c
 * Source line: 151671
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0013f28c(uint *param_1,uint *param_2)

{
  int iVar1;
  uint local_18;
  uint uStack_14;
  
  iVar1 = FUN_0013fefc(&local_18,*param_1 & 0xfffffffe);
  if (iVar1 < 0) {
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    param_1[3] = local_18;
    param_1[4] = uStack_14;
    *param_2 = local_18;
    param_2[1] = uStack_14;
  }
  return iVar1;
}
