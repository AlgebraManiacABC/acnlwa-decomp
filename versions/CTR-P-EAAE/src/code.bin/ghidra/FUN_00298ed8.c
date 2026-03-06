/**
 * FUN_00298ed8.c
 * Source line: 339091
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00298ed8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004bef3c(*(undefined4 *)(param_1 + 0x77c));
  if (((iVar1 != 0) || (iVar1 = FUN_004bef3c(*(undefined4 *)(param_1 + 0x778),param_2), iVar1 != 0))
     || (iVar1 = FUN_004bef3c(*(undefined4 *)(param_1 + 0x780),param_2), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
