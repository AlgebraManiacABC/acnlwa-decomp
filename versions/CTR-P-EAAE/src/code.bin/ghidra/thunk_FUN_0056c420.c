/**
 * thunk_FUN_0056c420.c
 * Source line: 399974
 * Body lines: 11
 */
#include "../../../include/types.h"

uint thunk_FUN_0056c420(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_0062f728(uVar2 & 0xff);
    if (iVar1 == 0) {
      return uVar2 - 1 & 0xff;
    }
    uVar2 += 1;
  } while ((int)uVar2 < 0x17);
  return 0;
}
