/**
 * FUN_001aa440.c
 * Source line: 214536
 * Body lines: 15
 */
#include "../../../include/types.h"

FUN_001aa440(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined1 param_4,
            undefined4 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)FUN_005664d8(param_1,param_2,param_5);
  *puVar4 = &UNK_008eb14c;
  uVar1 = param_3[3];
  uVar2 = param_3[2];
  uVar3 = param_3[1];
  *(undefined1 *)(puVar4 + 4) = *param_3;
  *(undefined1 *)((int)puVar4 + 0x11) = uVar3;
  *(undefined1 *)((int)puVar4 + 0x12) = uVar2;
  *(undefined1 *)((int)puVar4 + 0x13) = uVar1;
  *(undefined1 *)(puVar4 + 5) = param_4;
  return puVar4;
}
