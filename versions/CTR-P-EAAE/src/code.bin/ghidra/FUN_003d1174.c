/**
 * FUN_003d1174.c
 * Source line: 542917
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_003d1174(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_003833d4();
  *puVar1 = &UNK_008fe9e0;
  iVar2 = FUN_003cf948(puVar1 + 3,param_2);
  *(undefined4 *)(iVar2 + 0x24) = param_3;
  iVar2 = FUN_003cc43c(iVar2 + 0x28);
  iVar2 = FUN_003d464c(iVar2 + 0x1c);
  *(undefined1 *)(iVar2 + -0x47) = 0;
  return;
}
