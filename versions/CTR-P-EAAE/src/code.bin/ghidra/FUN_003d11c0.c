/**
 * FUN_003d11c0.c
 * Source line: 542935
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003d11c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_003833d4();
  *puVar1 = &UNK_008fe9e0;
  iVar2 = FUN_003cf948(puVar1 + 3,param_2);
  *(undefined4 *)(iVar2 + 0x20) = param_3;
  *(undefined4 *)(iVar2 + 0x24) = param_4;
  iVar2 = FUN_003cc36c(iVar2 + 0x28,param_5);
  iVar2 = FUN_003d4550(iVar2 + 0x1c,param_6);
  *(undefined1 *)(iVar2 + -0x47) = 1;
  return;
}
