/**
 * FUN_00163744.c
 * Source line: 179183
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_00163744(undefined4 param_1,ushort *param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00163928();
  uRam00975c8c = 0;
  if (iRam00ae56cc == 0) {
    uRam00ae56b8 = (uint)*param_2;
    uRam00ae56bc = (uint)param_2[1];
    uRam00ae56c0 = *(undefined4 *)(param_2 + 2);
    iVar1 = FUN_0015ced4(0xae56b8,0xae56c4,param_1,param_2 + 4);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = FUN_0015d7e4(param_1,0xae56c4,0xae5724,param_3);
  return iVar1 != 0;
}
