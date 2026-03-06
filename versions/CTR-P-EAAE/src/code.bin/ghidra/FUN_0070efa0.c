/**
 * FUN_0070efa0.c
 * Source line: 1066381
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0070efa0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0070f648();
  uVar2 = 0;
  if (((iVar1 != 0) && (iVar1 = FUN_0071fc14(param_1 + 0x24), uVar2 = 0, iVar1 != 0)) &&
     (iVar1 = FUN_0071c0f4(param_1 + 0xc0c), uVar2 = 0, iVar1 != 0)) {
    iVar1 = FUN_003193e8(param_1 + 0x2058,0x16188,0xffffffff);
    if (*(int *)(param_1 + 0x2054) == iVar1) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
