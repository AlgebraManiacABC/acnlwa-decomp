/**
 * FUN_0051f454.c
 * Source line: 763296
 * Body lines: 14
 */
#include "../../../include/types.h"

void * FUN_0051f454(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 < param_2) {
    return NULL;
  }
  if (param_4 == 0) {
    param_4 = _DAT_00aaf14c;
  }
  iVar1 = FUN_00301e20(param_3);
  if ((-iVar1 & param_4) != 0) {
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return NULL;
}
