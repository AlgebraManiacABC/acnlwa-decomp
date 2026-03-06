/**
 * FUN_004d90dc.c
 * Source line: 720649
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004d90dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004d8ca4();
  *puVar1 = &UNK_00902794;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 3) = 1;
  puVar1[2] = param_3;
  return;
}
