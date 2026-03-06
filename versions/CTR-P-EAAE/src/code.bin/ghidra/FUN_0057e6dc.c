/**
 * FUN_0057e6dc.c
 * Source line: 825579
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0057e6dc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0075d0f0(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    FUN_006021d0(*(undefined4 *)(DAT_0095deac + 0x14));
    *(undefined1 *)(iRam0095e0fc + 0x97) = 0;
    FUN_00580490(param_1);
    FUN_0081aef8(param_1 + 0xa4,&UNK_0057d210,0);
  }
  return;
}
