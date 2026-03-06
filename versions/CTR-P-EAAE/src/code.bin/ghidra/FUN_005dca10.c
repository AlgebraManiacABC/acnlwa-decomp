/**
 * FUN_005dca10.c
 * Source line: 888259
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_005dca10(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_007559a0(param_3);
  iVar1 = _DAT_00aaf14c;
  if (((_DAT_00aaf14c == 0) || (iVar2 = FUN_002fbd54(_DAT_00aaf14c + 0x55a6), iVar2 == 0)) ||
     (-1 < (int)((uint)*(byte *)(iVar1 + 0x8f7b) * 0x20000000))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *param_2 = uVar3;
  return 1;
}
