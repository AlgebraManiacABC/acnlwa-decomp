/**
 * FUN_00140838.c
 * Source line: 153037
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00140838(int param_1,undefined4 *param_2,uint param_3)

{
  if ((*(uint *)(param_1 + 0x24) & 1) != 0) {
    __rt_memclr(param_2,param_3);
    return;
  }
  if ((*(uint *)(param_1 + 0x24) & 2) != 0) {
    __aeabi_memset(param_2,param_3,DAT_00981894);
    return;
  }
  return;
}
