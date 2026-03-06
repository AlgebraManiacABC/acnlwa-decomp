/**
 * FUN_0011d258.c
 * Source line: 120246
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0011d258(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_10;
  
  if (((uRam00974f4c & 1) == 0) && (local_10 = in_r3, iVar1 = FUN_002fe7dc(0x974f4c), iVar1 != 0)) {
    iVar1 = FUN_0011e180(&local_10,&UNK_0400024b);
    if (iVar1 < 0) {
      FUN_00134250();
    }
    cRam00974f48 = (char)local_10 != '\0';
  }
  return (int)cRam00974f48;
}
