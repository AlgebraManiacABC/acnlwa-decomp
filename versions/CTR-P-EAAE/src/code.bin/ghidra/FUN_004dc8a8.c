/**
 * FUN_004dc8a8.c
 * Source line: 722828
 * Body lines: 13
 */
#include "../../../include/types.h"

void * FUN_004dc8a8(void)

{
  int iVar1;
  undefined4 *mem;
  void *pvVar2;
  undefined4 in_r3;
  
  iVar1 = _DAT_00952cac;
  if (_DAT_00952cac != 0) {
    mem = (undefined4 *)FUN_00131280(0x202,_DAT_00952cac,4,in_r3,in_r3);
    __rt_memclr(mem,0x202);
    FUN_00131280(0x1400,iVar1,4);
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return NULL;
}
