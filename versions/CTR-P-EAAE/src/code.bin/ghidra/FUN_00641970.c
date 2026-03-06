/**
 * FUN_00641970.c
 * Source line: 955345
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00641970(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_007559ac(param_3);
  if ((iVar1 == 0x60) && (iVar2 = FUN_00755a98(param_3), iVar1 = _DAT_00aaf14c, iVar2 == 0)) {
    *param_2 = 1;
    if ((iVar1 != 0) && (0xd < *(ushort *)(iVar1 + 0x8f28))) {
      *param_2 = 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}
