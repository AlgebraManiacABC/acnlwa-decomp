/**
 * FUN_005b25d8.c
 * Source line: 863550
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_005b25d8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = switchD_0026f83c::caseD_0(param_1 + 4,param_2,0x6000,param_3 + 4,0x1400,0x40,0x68,4,0);
  if (iVar1 == 0) {
    __rt_memclr_w(param_2,0x6000);
  }
  return iVar1 != 0;
}
