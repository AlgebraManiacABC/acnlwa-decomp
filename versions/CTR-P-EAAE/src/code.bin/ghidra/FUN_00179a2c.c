/**
 * FUN_00179a2c.c
 * Source line: 193541
 * Body lines: 8
 */
#include "../../../include/types.h"

void * FUN_00179a2c(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_0058dc80(0xb,*param_1,param_1[1],param_1[2],1);
  if (iVar1 == 0) {
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return NULL;
}
