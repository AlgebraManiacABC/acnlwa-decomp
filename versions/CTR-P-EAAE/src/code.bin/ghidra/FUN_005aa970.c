/**
 * FUN_005aa970.c
 * Source line: 857261
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005aa970(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005a3b10(param_1,param_2,uRam009816ac,0);
  *puVar1 = &UNK_00907e1c;
  puVar1[0xc] = uRam009816ac;
  *puVar1 = &UNK_00907e9c;
  *(undefined1 *)(puVar1 + 0xd) = param_3;
  puVar1[0xe] = param_4;
  *(undefined1 *)(puVar1 + 0xf) = param_5;
  return;
}
