/**
 * FUN_00195654.c
 * Source line: 206882
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00195654(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0071ee8c(param_1 + 0x6004);
  if (iVar1 == 0) {
    iVar1 = FUN_006d1e64();
    iVar1 = FUN_00765f54(*(undefined4 *)(iVar1 + 0x1dc));
    if (iVar1 != 0) {
      FUN_008164d8(param_1 + 0x28,FUN_00194990,0);
    }
  }
  return;
}
