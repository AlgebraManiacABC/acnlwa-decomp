/**
 * FUN_001fe838.c
 * Source line: 260262
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_001fe838(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x800,uVar1);
  if (iVar2 == 0) {
    uVar1 = GET_BYTE_00957322();
    iVar2 = FUN_002f74e0(0x200000,uVar1);
    if ((iVar2 == 0) && (iRam009506f8 == 0)) {
      iRam009506f8 = param_1;
      FUN_001fe718(param_1);
      return 2;
    }
  }
  return 1;
}
