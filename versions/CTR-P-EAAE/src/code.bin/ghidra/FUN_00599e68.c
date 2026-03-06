/**
 * FUN_00599e68.c
 * Source line: 846239
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00599e68(Fg_t *param_1)

{
  int iVar1;
  FgParam_t *pFVar2;
  
  iVar1 = FUN_002fccc4();
  if (iVar1 != 0) {
    pFVar2 = Fg_GetParam(param_1);
    iVar1 = FUN_002fe7a0(param_1);
    if ((iVar1 != 0) && ('\x01' < (char)pFVar2->field_0xd)) {
      return 1;
    }
  }
  return 0;
}
