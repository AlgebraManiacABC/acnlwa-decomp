/**
 * FUN_0068f2c8.c
 * Source line: 995261
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0068f2c8(undefined4 *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 local_14;
  float local_10;
  undefined4 uStack_c;
  
  iVar1 = DAT_00950874;
  if (DAT_00950874 != 0) {
    local_14 = *param_1;
    local_10 = (float)param_1[1];
    uStack_c = param_1[2];
    fVar2 = (float)FUN_001a4f78(DAT_00950874);
    local_10 = fVar2 + local_10;
    FUN_001a360c(iVar1,&local_14,0x1b,0x14,0);
  }
  return;
}
