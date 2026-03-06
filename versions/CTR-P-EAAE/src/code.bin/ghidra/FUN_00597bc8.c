/**
 * FUN_00597bc8.c
 * Source line: 845221
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00597bc8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002fc900();
  if (iVar1 == 0) {
    uVar2 = GET_BYTE_00957322();
    iVar1 = FUN_005a06d4(param_1,param_2,uVar2);
    if ((iVar1 == -1) && (iVar1 = FUN_005a08dc(0x23,param_1,param_2,uVar2,1), iVar1 != -1)) {
      return 1;
    }
  }
  return 0;
}
