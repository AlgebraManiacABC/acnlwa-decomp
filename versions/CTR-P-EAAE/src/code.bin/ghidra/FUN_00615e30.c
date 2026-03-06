/**
 * FUN_00615e30.c
 * Source line: 928276
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_00615e30(uint *param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_002fcb34(param_3);
  if (iVar2 == 0x27) {
    uVar3 = FUN_006d9058(param_3);
    iVar1 = (uVar3 & 0xff) * 0x4c;
    *param_1 = (uint)(byte)(&UNK_0086a310)[iVar1];
    *param_2 = (uint)(byte)(&UNK_0086a311)[iVar1];
  }
  return iVar2 == 0x27;
}
