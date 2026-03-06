/**
 * FUN_00303d10.c
 * Source line: 400901
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00303d10(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while ((((iVar1 = FUN_002fb96c(uVar3 & 0xff), iVar1 == 0 || (iVar2 = FUN_00114c70(), iVar2 == 0))
          || (*(char *)(iVar1 + 0x5730) < '\0')) ||
         (-1 < (int)((uint)*(byte *)(iVar1 + 0x5719) << 0x1e)))) {
    uVar3 += 1;
    if (3 < (int)uVar3) {
      return;
    }
  }
  GET_DAT_0095bf74();
  return;
}
