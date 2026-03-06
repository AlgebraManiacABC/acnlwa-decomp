/**
 * FUN_002a4b98.c
 * Source line: 345544
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002a4b98(int param_1)

{
  int iVar1;
  
  iVar1 = iRam0094d560;
  if (iRam0094d560 != 0) {
    FUN_002783c4(iRam0094d560);
    FUN_00278484(iVar1,param_1 + 0xd4,0xf,0x20,0x46);
    FUN_00278484(iVar1,param_1 + 0x304,0xf,0x21,0x46);
    *(undefined1 *)(param_1 + 0x534) = 1;
  }
  return;
}
