/**
 * FUN_0025c484.c
 * Source line: 307388
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0025c484(int param_1)

{
  undefined4 local_28 [8];
  
  FUN_006d2780();
  FUN_001a9368(local_28);
  local_28[0] = 0x18;
  __rt_memcpy_w(&DAT_009ab068,local_28,0x19);
  FUN_008178ac(param_1 + 0x28,&UNK_0025bc38,0);
  *(undefined1 *)(param_1 + 0xa353) = 1;
  return;
}
