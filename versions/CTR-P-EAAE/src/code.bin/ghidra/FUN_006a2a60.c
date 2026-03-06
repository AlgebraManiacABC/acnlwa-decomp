/**
 * FUN_006a2a60.c
 * Source line: 1002141
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006a2a60(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    uVar1 = FUN_00305f44();
    if ((uVar1 != uVar3) && (iVar2 = FUN_00624038(uVar3 & 0xff,1), iVar2 != 0)) {
      FUN_00606f20();
    }
    uVar3 += 1;
  } while ((int)uVar3 < 4);
  FUN_006247ac(DAT_0095362c,1);
  return;
}
