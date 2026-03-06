/**
 * FUN_005cbee4.c
 * Source line: 879417
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005cbee4(int param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00303770(param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_002fbd54();
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      FUN_001b4a8c(param_1,iVar1 + 0x55a6);
    }
  }
  if (param_3 == 0) {
    FUN_002fb94c();
    return;
  }
  return;
}
