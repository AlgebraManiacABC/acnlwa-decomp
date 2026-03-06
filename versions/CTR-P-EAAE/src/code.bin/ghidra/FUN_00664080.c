/**
 * FUN_00664080.c
 * Source line: 972385
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00664080(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 local_10;
  
  local_10 = param_4 & 0xffff0000;
  FUN_006540d8(param_1,local_10,0xf0);
  if ((*(byte *)(param_1 + 0x171) & 1) != 0) {
    *(byte *)(param_1 + 0x171) = *(byte *)(param_1 + 0x171) & 0xfe;
    FUN_00599da0(param_1,(int)*(char *)(param_1 + 0x8ca),(int)*(char *)(param_1 + 0x8cb),local_10);
    return;
  }
  return;
}
