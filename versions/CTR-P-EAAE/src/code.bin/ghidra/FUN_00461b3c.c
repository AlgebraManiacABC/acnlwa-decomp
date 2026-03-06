/**
 * FUN_00461b3c.c
 * Source line: 628999
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_00461b3c(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_00461a18(param_1,param_6,param_7,*param_2,param_2[1],param_2[2],param_8);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x20) = param_3;
    *(undefined4 *)(param_1 + 0x24) = param_4;
    if ((param_5 == NULL) ||
       (iVar1 = FUN_00461e84(param_1,*param_5,param_5[1],param_5[2]), -1 < iVar1)) {
      return 0;
    }
    FUN_00461c04(param_1);
  }
  return iVar1;
}
