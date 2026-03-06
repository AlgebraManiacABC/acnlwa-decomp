/**
 * FUN_0035530c.c
 * Source line: 456520
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0035530c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *local_20;
  undefined1 auStack_1c [8];
  
  local_20 = &UNK_008fe9d0;
  FUN_003548f0(auStack_1c,&UNK_00898a78);
  FUN_0082d3dc(param_1 + 0x28,&local_20);
  FUN_003d0d6c(&local_20);
  local_20 = &UNK_008fe9d0;
  FUN_003548f0(auStack_1c,&UNK_00898a78);
  uVar1 = FUN_0082d508(param_1 + 0x28,&local_20);
  FUN_003d0e94(uVar1,param_2);
  FUN_003d0d6c(&local_20);
  return;
}
