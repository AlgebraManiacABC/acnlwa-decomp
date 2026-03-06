/**
 * FUN_004e9a28.c
 * Source line: 731544
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_004e9a28(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = FUN_007457e8();
  uVar2 = GET_BYTE_00957322();
  FUN_002f74e0(8,uVar2);
  if (uVar1 != 0xffffffff) {
    GET_BYTE_00957322();
    uVar3 = FUN_005b42fc();
    if ((uVar3 < 0x31) && (uVar1 < uVar3)) {
      return *(undefined4 *)(uVar1 * 4 + 0x9c7a14);
    }
  }
  return 0;
}
