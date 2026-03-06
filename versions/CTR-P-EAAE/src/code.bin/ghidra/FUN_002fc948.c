/**
 * FUN_002fc948.c
 * Source line: 394993
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_002fc948(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002fe7cc(DAT_00952b9d);
  if (iVar1 == 0) {
    if (((uRam00952ba8 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x952ba8), iVar1 != 0)) {
      uVar2 = FUN_005819ec(0xa14860);
      __aeabi_atexit(uVar2,FUN_00581a18,0x100000);
    }
    iVar1 = 0xa14860;
  }
  return iVar1;
}
