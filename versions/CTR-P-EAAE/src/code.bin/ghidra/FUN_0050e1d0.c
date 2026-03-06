/**
 * FUN_0050e1d0.c
 * Source line: 752406
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0050e1d0(undefined4 *param_1)

{
  undefined *local_18;
  char *local_14;
  
  if (_DAT_00953674 == 0) {
    local_14 = "NexHeap";
    local_18 = &DAT_009047f8;
    _DAT_00953674 = FUN_002f6e78(0xd6000,&local_18,*param_1,1,1);
    __rt_memclr_w(param_1 + 0x1b,0x22);
  }
  return 1;
}
