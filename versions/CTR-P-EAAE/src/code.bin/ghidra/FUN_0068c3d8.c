/**
 * FUN_0068c3d8.c
 * Source line: 992763
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0068c3d8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x8000,uVar1);
  if ((iVar2 != 0) && (iVar2 = GET_BYTE_00957322(), iVar2 != 0x49)) {
    uVar1 = GET_BYTE_00957322();
    iVar2 = FUN_002f74e0(0x2000,uVar1);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}
