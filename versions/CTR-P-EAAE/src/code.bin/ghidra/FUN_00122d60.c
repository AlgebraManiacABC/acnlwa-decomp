/**
 * FUN_00122d60.c
 * Source line: 125023
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_00122d60(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0094d004;
  puVar2 = puRam0094d008;
  if (DAT_0094d004 == 0) {
    iVar1 = FUN_00131280(0x10,param_1,4);
    puVar2 = NULL;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puVar2 = &UNK_008f9d64;
    }
  }
  puRam0094d008 = puVar2;
  DAT_0094d004 = iVar1;
  return DAT_0094d004;
}
