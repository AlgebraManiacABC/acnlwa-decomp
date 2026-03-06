/**
 * FUN_0011b5a4.c
 * Source line: 118052
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0011b5a4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  while( true ) {
    if (param_3 <= param_2) {
      return 0;
    }
    iVar1 = FUN_0030ead0(param_1,param_2);
    if (iVar1 != 0) break;
    param_2 += 1;
  }
  return 1;
}
