/**
 * FUN_0011d470.c
 * Source line: 120407
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0011d470(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = iRam0095168c;
  FUN_00125b38((astruct *)(iRam0095168c + 0xe00),"static.crs",uRam00952ca8,0x1000);
  uVar2 = FUN_00125b38((astruct *)(iVar1 + 0xe10),".crr/static.crr",uRam00952ca8,0x1000);
  FUN_0011f854(*(undefined4 *)(iVar1 + 0xe04),*(undefined4 *)(iVar1 + 0xe08));
  uVar3 = FUN_0011f880(*(undefined4 *)(iVar1 + 0xe14),*(undefined4 *)(iVar1 + 0xe18));
  *(undefined4 *)(iVar1 + 0xe20) = uVar3;
  return uVar2;
}
