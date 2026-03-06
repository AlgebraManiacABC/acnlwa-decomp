/**
 * FUN_002fa5b0.c
 * Source line: 393177
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_002fa5b0(ushort *param_1,int param_2,int param_3,uint param_4)

{
  ushort uVar1;
  bool bVar2;
  
  do {
    bVar2 = param_2 == 0;
    param_2 += -1;
    if (bVar2) {
      return param_3;
    }
    uVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (uVar1 != param_4);
  if (param_3 != 0) {
    return 0;
  }
  return 1;
}
