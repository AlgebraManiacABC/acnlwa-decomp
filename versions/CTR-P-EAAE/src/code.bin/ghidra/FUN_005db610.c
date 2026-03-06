/**
 * FUN_005db610.c
 * Source line: 887508
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_005db610(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_007559a0(param_3);
  iVar1 = _DAT_00aaf14c;
  uVar3 = 0;
  if (((_DAT_00aaf14c != 0) && (iVar2 = FUN_002fbd54(_DAT_00aaf14c + 0x55a6), iVar2 != 0)) &&
     ((*(byte *)(iVar1 + 0x55ba) & 1) != 0)) {
    uVar3 = 1;
  }
  *param_2 = uVar3;
  return 1;
}
