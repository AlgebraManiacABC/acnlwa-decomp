/**
 * FUN_00607bdc.c
 * Source line: 921993
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00607bdc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  GET_DAT_0095bf74();
  iVar1 = FUN_00757bf0();
  iVar2 = GET_DAT_00951480_plus4();
  if (((iVar2 == 0) || (iVar2 = GET_DAT_00951480_plusC(), iVar2 != 0)) ||
     (iVar2 = GET_DAT_00951480_plus10(), iVar2 != iVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
