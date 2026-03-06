/**
 * FUN_005e3128.c
 * Source line: 893303
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005e3128(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_005d6868(param_1,param_2,0);
  puVar2 = (undefined4 *)FUN_00601a20(iVar1 + 0x44);
  puVar2[0x1a] = 0;
  *puVar2 = &UNK_00908f2c;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x18] = iVar1;
  puVar2[0x19] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  *(undefined1 *)(puVar2 + 0x1f) = 0;
  return;
}
