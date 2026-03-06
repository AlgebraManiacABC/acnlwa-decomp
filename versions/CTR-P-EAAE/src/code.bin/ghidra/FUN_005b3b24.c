/**
 * FUN_005b3b24.c
 * Source line: 864100
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_005b3b24(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0051fe30();
  iVar2 = FUN_00747abc(uVar1,0x20d,0);
  if (((iVar2 != 0) && (iVar3 = GET_BYTE_00957322(), iVar3 == 0xa4)) &&
     (*(char *)(iVar2 + 0x404) == '\x01')) {
    *(undefined1 *)(iVar2 + 0x404) = 0;
    return 1;
  }
  return 0;
}
