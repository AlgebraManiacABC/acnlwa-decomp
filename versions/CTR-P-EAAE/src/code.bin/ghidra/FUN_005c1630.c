/**
 * FUN_005c1630.c
 * Source line: 870911
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005c1630(int param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0(4,0,param_3,param_4,param_4);
  if (iVar1 != 0) {
    if (param_1 == 0) {
      param_1 = iVar1 + 0x14;
    }
    if (param_2 == NULL) {
      param_2 = (undefined2 *)(iVar1 + 0x2e);
    }
    FUN_0065e358(iVar1,param_1,*param_2,*param_2);
    return;
  }
  return;
}
