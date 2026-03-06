/**
 * FUN_001ab70c.c
 * Source line: 215471
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_001ab70c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0076f954(&DAT_00a14b5c);
  iVar2 = FUN_004eefe0(param_1 + 0xcc,param_1 + 0x78,*puVar1,param_3,param_4);
  if (iVar2 != 0) {
    FUN_004ee904(param_1 + 0xe0,1);
    FUN_004edaec(param_1 + 0x78,param_1 + 0xcc);
  }
  return iVar2 != 0;
}
