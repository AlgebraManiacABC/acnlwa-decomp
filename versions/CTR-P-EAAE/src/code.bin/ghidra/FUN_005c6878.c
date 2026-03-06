/**
 * FUN_005c6878.c
 * Source line: 875643
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005c6878(uint *param_1,undefined4 param_2,undefined1 param_3,float *param_4,
                 undefined2 param_5,undefined1 param_6)

{
  uint *_src;
  
  _src = (uint *)FUN_005c330c(param_2);
  __rt_memcpy(param_1,_src,0x26);
  *(undefined1 *)param_1 = param_3;
  *(short *)((int)param_1 + 2) = (short)(int)(*param_4 * 4.0);
  *(short *)(param_1 + 1) = (short)(int)(param_4[2] * 4.0);
  *(undefined2 *)((int)param_1 + 6) = param_5;
  *(undefined1 *)((int)param_1 + 1) = param_6;
  *(undefined2 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}
