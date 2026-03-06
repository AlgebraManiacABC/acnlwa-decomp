/**
 * FUN_00605638.c
 * Source line: 920921
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00605638(void)

{
  int iVar1;
  
  if (iRam0094ed44 == 0) {
    iVar1 = FUN_00131280(0x14,0,4);
    if (iVar1 == 0) {
      puRam0094ed48 = NULL;
      iRam0094ed44 = 0;
    }
    else {
      puRam0094ed48 = (undefined4 *)FUN_001320cc(iVar1,0,3);
      *puRam0094ed48 = &UNK_0090ab14;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      iRam0094ed44 = iVar1;
    }
  }
  return;
}
