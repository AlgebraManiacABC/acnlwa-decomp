/**
 * FUN_00710720.c
 * Source line: 1066705
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00710720(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [4];
  int local_c;
  
  FUN_00300650(auStack_10);
  cVar1 = (char)local_c;
  if (((cVar1 == '\x02' || cVar1 == '\x05') || (cVar1 == '\b' || cVar1 == '\v')) &&
     (FUN_00300650(auStack_10), 0xe < (local_c << 0x10) >> 0x18)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
