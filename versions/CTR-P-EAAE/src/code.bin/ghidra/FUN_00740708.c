/**
 * FUN_00740708.c
 * Source line: 1098875
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_00740708(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint *_src;
  
  uVar1 = FUN_0073ef34(*(undefined4 *)(param_1 + 4));
  FUN_0073ef84(uVar1,param_4);
  _src = (uint *)FUN_0073eee8();
  if (_src != NULL) {
    __rt_memcpy(param_2,_src,0x26);
    FUN_007795ec(param_3,(int)_src + 0x26);
  }
  return _src != NULL;
}
