/**
 * FUN_0071348c.c
 * Source line: 1068458
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined * FUN_0071348c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0071ecc4(param_1 + 0x4c);
  if (iVar1 != 0) {
    puVar2 = (undefined *)FUN_0071ecf0(param_1 + 0x4c);
    return puVar2;
  }
  iVar1 = FUN_00718c0c(param_1 + 0x3cf4,param_2);
  if (iVar1 != 0) {
    puVar2 = (undefined *)FUN_00724400(param_1 + 0x3cf4,param_2);
    return puVar2;
  }
  return &DAT_0095bfdc;
}
