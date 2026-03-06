/**
 * FUN_0011b890.c
 * Source line: 118328
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_0011b890(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  piVar1 = (int *)std::__rw_get_cats();
  if ((param_2 < piVar1[1]) && (iVar2 = *(int *)(*piVar1 + param_2 * 8), iVar2 != -1)) {
    local_18 = 0;
    puVar3 = (undefined4 *)FUN_001063bc(iVar2,param_3,param_4,&local_18);
    if (puVar3 != &local_18) {
      return puVar3;
    }
  }
  return NULL;
}
