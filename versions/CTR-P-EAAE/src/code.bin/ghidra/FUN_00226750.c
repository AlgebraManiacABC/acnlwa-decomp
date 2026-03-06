/**
 * FUN_00226750.c
 * Source line: 280479
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00226750(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = *(int *)(&DAT_00997c30 + iVar1 * 4);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x5af) = *(byte *)(iVar2 + 0x5af) & 0xef;
    }
    iVar1 += 1;
  } while (iVar1 < 6);
  return;
}
