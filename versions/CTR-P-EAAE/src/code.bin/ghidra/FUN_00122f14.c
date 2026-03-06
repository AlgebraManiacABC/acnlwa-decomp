/**
 * FUN_00122f14.c
 * Source line: 125113
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_00122f14(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = iRam0094d0d0;
  puVar2 = puRam0094d0d4;
  if (iRam0094d0d0 == 0) {
    iVar1 = FUN_00131280(0x10,param_1,4);
    puVar2 = NULL;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puVar2 = &UNK_008f9d84;
    }
  }
  puRam0094d0d4 = puVar2;
  iRam0094d0d0 = iVar1;
  return iRam0094d0d0;
}
