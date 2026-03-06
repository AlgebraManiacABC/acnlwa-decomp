/**
 * FUN_00540978.c
 * Source line: 784933
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_00540978(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = iRam0097e84c;
  puVar2 = puRam0097e850;
  if (iRam0097e84c == 0) {
    iVar1 = FUN_00131280(0x10,param_1,4);
    puVar2 = NULL;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puVar2 = &UNK_009041a0;
    }
  }
  puRam0097e850 = puVar2;
  iRam0097e84c = iVar1;
  return iRam0097e84c;
}
