/**
 * FUN_006418c4.c
 * Source line: 955325
 * Body lines: 10
 */
#include "../../../include/types.h"

void * FUN_006418c4(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_007559ac(param_3);
  if ((iVar1 == 0x60) && (iVar1 = FUN_00755a98(param_3), iVar1 == 0)) {
    *param_2 = 1;
    FUN_00632acc(param_1);
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return NULL;
}
