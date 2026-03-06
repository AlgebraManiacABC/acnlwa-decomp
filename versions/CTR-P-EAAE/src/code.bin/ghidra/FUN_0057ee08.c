/**
 * FUN_0057ee08.c
 * Source line: 825761
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0057ee08(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0071ee8c(*(int *)(param_1 + 0x58c) + 0x398);
  if (iVar1 == 0) {
    if ((DAT_0095e0cb == '\x10') && (iVar1 = FUN_007580f0(iRam0094fbc0 + 0x118), iVar1 != 0)) {
      FUN_004f6900(*(undefined4 *)(param_1 + 0x598),1);
    }
    DAT_0094fd58 |= 0x40;
    FUN_0081aef8(param_1 + 0xa4,&UNK_0057d210,0);
  }
  return;
}
