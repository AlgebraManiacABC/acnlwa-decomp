/**
 * FUN_003e78ec.c
 * Source line: 559931
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_003e78ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  *param_1 = &UNK_008fefa4;
  iVar1 = FUN_00450cd8(param_1 + 1,param_2);
  iVar1 = FUN_0045b190(iVar1 + 0x28,param_3);
  *(undefined1 *)(iVar1 + 0x54) = param_4;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = param_5;
  return;
}
