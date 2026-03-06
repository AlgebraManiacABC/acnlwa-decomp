/**
 * FUN_0052dfa8.c
 * Source line: 772678
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0052dfa8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x20,uVar1);
  if (((iVar2 == 0) && (iVar2 = FUN_002f74e0(0x40000,uVar1), iVar2 == 0)) &&
     ((iVar2 = FUN_002f74e0(0x80000,uVar1), iVar2 == 0 ||
      (*(char *)(DAT_0095c6d0 + 0x10c) != '\0' && *(char *)(DAT_0095c6d0 + 0x10c) != '\x02')))) {
    return;
  }
  iVar2 = FUN_0060c5c4();
  *(float *)(iVar2 + 8) = 1.0 - fRam00aaf198;
  return;
}
