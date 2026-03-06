/**
 * FUN_004de450.c
 * Source line: 723772
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_004de450(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_002fcb34();
  if ((iVar1 == 0x29) && (iVar1 = FUN_002fcb34(param_2), iVar1 == 0x29)) {
    iVar1 = FUN_002ffad8(param_1);
    iVar2 = FUN_002ffad8(param_2);
    if ((iVar1 == iVar2) &&
       ((uVar3 = FUN_0076b274(param_1), uVar3 < 4 && (uVar3 = FUN_0076b274(param_1), uVar3 < 4)))) {
      return 1;
    }
  }
  return 0;
}
