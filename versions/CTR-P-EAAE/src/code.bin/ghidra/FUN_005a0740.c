/**
 * FUN_005a0740.c
 * Source line: 850010
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005a0740(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = GET_BYTE_00957322();
  iVar3 = FUN_005a06d4(param_1,param_2,uVar2);
  if ((iVar3 != -1) && (cVar1 = *(char *)(iVar3 * 5 + 0x9b41c8), cVar1 == '#' || cVar1 == '$')) {
    *(undefined1 *)(iVar3 * 5 + 0x9b41c6) = 0xa5;
  }
  return;
}
