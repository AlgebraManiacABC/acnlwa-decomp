/**
 * FUN_004c8dbc.c
 * Source line: 708504
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004c8dbc(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &UNK_00902278;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (undefined4 *)FUN_0013b560(param_1 + 3);
  *puVar1 = &PTR_PTR_00902234;
  puVar1[-3] = &UNK_00902214;
  *(undefined1 *)(puVar1 + 0x95) = 0;
  *(undefined1 *)((int)puVar1 + 0x255) = 1;
  return;
}
