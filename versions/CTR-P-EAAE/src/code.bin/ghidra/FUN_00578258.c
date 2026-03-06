/**
 * FUN_00578258.c
 * Source line: 821532
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00578258(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 1) & 0xf) == 1)) {
    FUN_00303fb4(param_1 + 0xb06,0x14,1);
    FUN_00303fb4(param_1 + 0xb06,0x17,1);
    iVar1 = FUN_002fc900();
    if (iVar1 != 0) {
      FUN_0029cf0c(*(undefined4 *)(param_1 + 0xaa0),*(undefined1 *)(param_1 + 0x95e));
    }
  }
  return 1;
}
