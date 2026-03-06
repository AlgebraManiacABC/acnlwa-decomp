/**
 * FUN_001f23c8.c
 * Source line: 255289
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001f23c8(int param_1)

{
  undefined4 local_1c;
  undefined4 uStack_18;
  float local_14;
  
  FUN_00303fb4(param_1 + 0xb06,10,1);
  *(undefined4 *)(param_1 + 0x928) = 4;
  local_1c = uRam00ac2bfc;
  uStack_18 = uRam00ac2c00;
  local_14 = fRam00ac2c04 - 180.0;
  FUN_006e9648(0x3fa00000,param_1 + 0x78,0,&local_1c,0x9537be,0);
  FUN_00303fb4(param_1 + 0xb06,0x1e,0);
  return;
}
