/**
 * FUN_001590c4.c
 * Source line: 171801
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_001590c4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_2 != 0) {
    iVar1 = FUN_00159084(param_2,param_3,param_7,param_1,param_4);
    iVar1 = (iVar1 >> 0x1f) + 1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (param_5 != 0) {
    iVar1 = FUN_00158ecc(param_5,param_6,param_8,param_9 << 3,param_4);
    iVar1 = (iVar1 >> 0x1f) + 1;
  }
  return iVar1;
}
