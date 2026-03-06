/**
 * FUN_00152a54.c
 * Source line: 166905
 * Body lines: 12
 */
#include "../../../include/types.h"

short FUN_00152a54(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  sVar1 = 0;
  uVar3 = 0;
  do {
    if (((uVar3 & 0xffff) < 100) && (iVar2 = FUN_0016c578(uVar3 & 0xffff,1), iVar2 != 0)) {
      sVar1 += 1;
    }
    uVar3 += 1;
  } while ((int)uVar3 < 100);
  return sVar1;
}
