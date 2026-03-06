/**
 * FUN_006d46bc.c
 * Source line: 1033832
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_006d46bc(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x80000,uVar1);
  if (iVar2 == 0) {
    uVar1 = GET_BYTE_00957322();
    iVar2 = FUN_002f74e0(0x100000,uVar1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((DAT_0095362c != 0) && (iVar2 = FUN_0075e058(DAT_0095362c + 0x1e4,4), iVar2 != 0)) {
    return 1;
  }
  return 0;
}
