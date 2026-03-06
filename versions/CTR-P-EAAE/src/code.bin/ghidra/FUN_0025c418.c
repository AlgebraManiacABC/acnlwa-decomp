/**
 * FUN_0025c418.c
 * Source line: 307367
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0025c418(int param_1,int param_2)

{
  undefined4 local_28 [7];
  
  FUN_006d2780();
  FUN_001a9368(local_28);
  if (param_2 == 0) {
    local_28[0] = 0x17;
  }
  else {
    local_28[0] = 0x15;
  }
  __rt_memcpy_w(&DAT_009ab068,local_28,0x19);
  FUN_008178ac(param_1 + 0x28,&UNK_0025bc38,0);
  *(undefined1 *)(param_1 + 0xa352) = 1;
  return;
}
