/**
 * FUN_00101868.c
 * Source line: 105276
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_00101868(ushort *param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = (uint)*param_1;
    if ((uVar1 == 0) || (uVar1 != *param_2)) break;
    param_3 += -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return uVar1 - *param_2;
}
