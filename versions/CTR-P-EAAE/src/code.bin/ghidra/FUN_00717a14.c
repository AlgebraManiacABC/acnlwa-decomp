/**
 * FUN_00717a14.c
 * Source line: 1071229
 * Body lines: 15
 */
#include "../../../include/types.h"

void * FUN_00717a14(undefined4 param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  int extraout_r2;
  undefined1 auStack_28 [28];
  
  FUN_0027a48c(auStack_28);
  iVar1 = _DAT_00aaf14c;
  if (param_2 < 8) {
    iVar1 = FUN_00717aac(param_1,param_2);
    if (iVar1 == 1) {
      pvVar2 = GET_DAT_0095bf74();
      return pvVar2;
    }
    iVar1 = *(int *)(extraout_r2 + 0x234);
  }
  return (void *)(iVar1 + 0x55a6);
}
