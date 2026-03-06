/**
 * FUN_00571514.c
 * Source line: 817005
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00571514(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x764);
  FUN_00576ca8(param_1 + 0x630,param_1,param_3,param_4,param_4);
  FUN_00575fc4(param_1,0,(int)(short)(*(short *)(param_1 + 0x608) - *(short *)(param_1 + 0x2e)),1,0)
  ;
  if (sVar1 < 0) {
    *(undefined2 *)(param_1 + 0x5c8) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x5c8) = 3;
  }
  return 1;
}
