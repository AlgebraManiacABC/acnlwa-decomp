/**
 * FUN_0076c958.c
 * Source line: 1130071
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0076c958(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0076d668(param_1,param_3);
  if (iVar1 != 0 && iVar1 != 5) {
    FUN_002ff8b0(4);
    iVar1 = FUN_0076d668(param_1,param_3);
    iVar1 = FUN_002fb96c(iVar1 - 1U & 3);
    iVar2 = FUN_002fbd54();
    if (iVar2 != 0) {
      FUN_0027a42c(param_2,iVar1 + 0x55a6);
      return 1;
    }
  }
  return 0;
}
