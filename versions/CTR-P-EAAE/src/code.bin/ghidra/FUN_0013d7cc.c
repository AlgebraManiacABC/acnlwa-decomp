/**
 * FUN_0013d7cc.c
 * Source line: 150010
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 * FUN_0013d7cc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008f54d0;
  if (param_1[1] != 0) {
    FUN_00136e58(param_1[1],0);
  }
  if ((param_1[0x11] != -1) && (iRam0094cd20 != 0)) {
    iVar1 = FUN_00138c2c(iRam0094cd20,0);
    if (((int)param_1[0x11] <= iVar1) &&
       (iVar1 = FUN_0013d4f0(iRam0094cd20,param_1[0x11],0), iVar1 != 0)) {
      param_1[0x11] = 0xffffffff;
    }
  }
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00136cc8(param_1 + 1);
  return param_1;
}
