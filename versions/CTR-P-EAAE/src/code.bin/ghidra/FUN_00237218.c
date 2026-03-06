/**
 * FUN_00237218.c
 * Source line: 288931
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00237218(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined1 auStack_44 [48];
  
  iVar1 = FUN_0075b8ec(param_2 + param_3 * 0x34);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00307040(auStack_58,0x100,auStack_44);
    *puVar2 = &DAT_008ed908;
    local_54 = 10;
    FUN_00306e58(auStack_58);
    GET_DAT_0095bf74();
    return;
  }
  return;
}
