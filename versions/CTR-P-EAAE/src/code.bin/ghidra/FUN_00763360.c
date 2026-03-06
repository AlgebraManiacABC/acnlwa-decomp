/**
 * FUN_00763360.c
 * Source line: 1122046
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00763360(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_002fe8a8(*(undefined1 *)(param_1 + 0x1ac));
  bVar2 = iVar1 == 0;
  if (!bVar2) {
    iVar1 += 0x6bd0;
    bVar2 = iVar1 == 0;
  }
  if (!bVar2) {
    FUN_0072413c(iVar1,param_2,0);
    return;
  }
  return;
}
