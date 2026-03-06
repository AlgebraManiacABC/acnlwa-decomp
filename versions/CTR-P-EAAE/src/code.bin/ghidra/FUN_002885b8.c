/**
 * FUN_002885b8.c
 * Source line: 330765
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002885b8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0071ee8c(param_1 + 0x2208);
  if (iVar1 == 0) {
    DAT_0094fd58 |= 0x10;
    *(uint *)(param_1 + 0xbfc) = *(uint *)(param_1 + 0xbfc) & 0xfffffff7;
    *(uint *)(param_1 + 0xce0) = *(uint *)(param_1 + 0xce0) & 0xfffffff7;
    *(undefined4 *)(param_1 + 0x2d5c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2d60) = 0xffffffff;
    FUN_00818104(param_1 + 0x28,FUN_002889bc,0);
  }
  return;
}
