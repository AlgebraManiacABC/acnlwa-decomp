/**
 * FUN_005f27d4.c
 * Source line: 904157
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005f27d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_78 [100];
  
  puVar1 = (undefined4 *)FUN_00601a20(auStack_78);
  *puVar1 = &UNK_009091b0;
  *(undefined1 *)((int)puVar1 + 0x61) = 0;
  *(undefined1 *)((int)puVar1 + 0x62) = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  FUN_005f2898(param_1,param_2,param_3,auStack_78);
  return;
}
