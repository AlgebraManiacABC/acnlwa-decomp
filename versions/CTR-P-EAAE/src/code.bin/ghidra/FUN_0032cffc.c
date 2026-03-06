/**
 * FUN_0032cffc.c
 * Source line: 432445
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0032cffc(float param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  Fg_t *pFVar3;
  float fVar4;
  
  iVar1 = FUN_006a5e34();
  if ((((iVar1 != 0) && (iVar2 = FUN_007529d8(iVar1,param_2,param_3), iVar2 != 0)) &&
      (fVar4 = (float)FUN_006c602c(param_2,param_3,0), fVar4 <= param_1)) &&
     (((iVar2 = FUN_006c8560(param_2,param_3,0), iVar2 == 0 &&
       (iVar2 = FUN_002fca6c(param_2,param_3,0), iVar2 == 0)) &&
      ((pFVar3 = FUN_002feb00(iVar1,param_2,param_3,0), pFVar3 == NULL ||
       (iVar1 = FUN_002fe7a0(), iVar1 == 0)))))) {
    return 1;
  }
  return 0;
}
