/**
 * FUN_0059ac18.c
 * Source line: 846739
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_0059ac18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_DAT_0094ee60 != 0) {
    uVar1 = FUN_006a5e34();
    iVar2 = FUN_007529d8(uVar1,param_2,param_3);
    if (iVar2 != 0) {
      iVar2 = FUN_005923fc(param_1,param_2,param_3,param_4);
      if (iVar2 != 0) {
        FUN_00125ca8(_DAT_0094ee60 + 0x3594);
      }
      return iVar2 != 0;
    }
  }
  return false;
}
