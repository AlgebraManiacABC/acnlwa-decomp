/**
 * FUN_005b4854.c
 * Source line: 864821
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_005b4854(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005b4724();
  if ((iVar1 == 0) ||
     (((iVar1 = FUN_005b4018(BYTE_00957322), iVar1 != 0 && (iVar1 = FUN_002fc900(), iVar1 != 0)) ||
      (iVar1 = FUN_006dfe10(), iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
