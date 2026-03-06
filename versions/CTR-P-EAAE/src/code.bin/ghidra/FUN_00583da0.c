/**
 * FUN_00583da0.c
 * Source line: 830265
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00583da0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0094cd08;
  if (((uRam0094cd10 & 1) == 0) && (iVar2 = FUN_002fe7dc(0x94cd10), iVar2 != 0)) {
    FUN_002e6a3c(0x982820);
  }
  FUN_002e69cc(0x982820,iVar1 + 0x20);
  return 0x982820;
}
