/**
 * FUN_00716c60.c
 * Source line: 1070832
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00716c60(void)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  puVar1 = (undefined4 *)FUN_002fb378();
  local_18 = *puVar1;
  uStack_14 = puVar1[1];
  local_10 = puVar1[2];
  FUN_00308efc(&local_18);
  if (uStack_14._2_1_ != '\x06') {
    GET_DAT_0095bf74();
    return;
  }
  GET_DAT_0095bf74();
  return;
}
