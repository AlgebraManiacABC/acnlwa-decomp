/**
 * FUN_0012b83c.c
 * Source line: 132437
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0012b83c(undefined4 param_1)

{
  int iVar1;
  
  if (iRam009753c8 == 0) {
    iVar1 = FUN_00131280(0x30,param_1,4);
    if (iVar1 == 0) {
      puRam009753cc = NULL;
      iRam009753c8 = 0;
    }
    else {
      puRam009753cc = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puRam009753cc = &UNK_00903f98;
      iRam009753c8 = FUN_001316d8(iVar1);
    }
  }
  return;
}
