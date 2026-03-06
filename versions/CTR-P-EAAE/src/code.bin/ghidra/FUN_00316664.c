/**
 * FUN_00316664.c
 * Source line: 417926
 * Body lines: 14
 */
#include "../../../include/types.h"

byte * FUN_00316664(astruct_5 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = FUN_00723998(param_1,param_2,param_3,param_4);
  pbVar2 = NULL;
  if (uVar1 != 0xffff) {
    pbVar2 = (param_1->file_struct).data;
  }
  if ((uVar1 != 0xffff && pbVar2 != NULL) && (uVar1 < 0x48)) {
    pbVar2 = pbVar2 + uVar1 * 0xc;
  }
  else {
    pbVar2 = NULL;
  }
  return pbVar2;
}
