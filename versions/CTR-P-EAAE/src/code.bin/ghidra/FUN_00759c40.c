/**
 * FUN_00759c40.c
 * Source line: 1114986
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00759c40(int param_1,uint param_2)

{
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if (param_2 < 3) {
    local_8 = 0xffffffff;
    FUN_0075c158(DAT_0095debc,&local_8,"SYS_2D_Dialog_Button",
                 *(undefined4 *)(param_1 + param_2 * 4 + 0x98));
  }
  return local_8;
}
