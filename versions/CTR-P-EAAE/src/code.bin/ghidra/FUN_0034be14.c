/**
 * FUN_0034be14.c
 * Source line: 448493
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0034be14(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 local_14;
  
  if (((*(int *)(param_1 + 8) == 0) && ((param_2 & 0xfff) == 0)) && ((param_3 & 0xfff) == 0)) {
    local_14 = 0;
    iVar1 = nn::svc::CreateMemoryBlock(&local_14,param_2,param_3,param_4,param_5);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 0x14) = local_14;
      *(uint *)(param_1 + 8) = param_2;
      *(uint *)(param_1 + 0xc) = param_3;
    }
  }
  return;
}
