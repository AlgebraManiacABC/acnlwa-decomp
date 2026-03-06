/**
 * FUN_0062f76c.c
 * Source line: 946629
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0062f76c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x20000,uVar1);
  if (iVar2 == 0) {
    uVar1 = FUN_0056bc28(param_1);
    iVar2 = FUN_001e5e70(uVar1,0);
    if (iVar2 == 9) {
      return 1;
    }
  }
  return 0;
}
