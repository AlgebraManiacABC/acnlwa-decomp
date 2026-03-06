/**
 * FUN_0060a5f0.c
 * Source line: 923167
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0060a5f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00625960();
  if (iVar1 != 0) {
    FUN_00623e70(DAT_0095362c + 0x230,0,1);
    FUN_006249b0(0x32,4,0);
    *(undefined1 *)(DAT_0095362c + 0x23b) = 1;
    FUN_0081c0a0(param_1);
  }
  return;
}
