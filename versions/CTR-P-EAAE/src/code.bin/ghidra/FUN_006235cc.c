/**
 * FUN_006235cc.c
 * Source line: 937066
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined8 FUN_006235cc(char *param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 local_18;
  undefined2 uStack_16;
  
  if (*param_1 == '\x06') {
    local_18 = *(undefined2 *)(DAT_0095362c + 0x1326e);
    uStack_16 = (undefined2)((uint)param_4 >> 0x10);
    FUN_00624b24(&local_18,param_1[1]);
    _local_18 = CONCAT22(uStack_16,*(undefined2 *)(DAT_0095362c + 0x1326e));
    FUN_00624b24(&local_18,param_1[1]);
    param_2 = &local_18;
  }
  return CONCAT44(param_2,1);
}
