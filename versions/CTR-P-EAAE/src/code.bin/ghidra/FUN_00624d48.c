/**
 * FUN_00624d48.c
 * Source line: 938480
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00624d48(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00301d0c(param_1,FUN_00625720,4,0x20);
  uVar2 = 0;
  do {
    FUN_006256dc(iVar1 + uVar2 * 4);
    uVar2 += 1;
  } while (uVar2 < 0x20);
  return iVar1;
}
