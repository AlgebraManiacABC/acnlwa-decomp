/**
 * nnroAeabiAtexit_.c
 * Source line: 1154492
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 nnroAeabiAtexit_(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int *local_10;
  
  local_10 = param_4;
  uVar1 = CRO_nnroControlObject((cro_file *)(param_3 & 0xfffff000),(uint *)&local_10,2);
  if ((uVar1 & 0x80000000) != 0) {
    local_10 = NULL;
  }
  puVar2 = (undefined4 *)(*local_10 + local_10[1] * 8);
  local_10[1] = local_10[1] + 1;
  *puVar2 = param_1;
  puVar2[1] = param_2;
  return 0;
}
