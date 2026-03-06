/**
 * FUN_0063d800.c
 * Source line: 953829
 * Body lines: 9
 */
#include "../../../include/types.h"

void * FUN_0063d800(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_007559ac(param_3);
  if (iVar1 == 0x60) {
    FUN_00755a98(param_3);
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return NULL;
}
