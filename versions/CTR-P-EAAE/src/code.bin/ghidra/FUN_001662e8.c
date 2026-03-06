/**
 * FUN_001662e8.c
 * Source line: 180953
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_001662e8(void)

{
  undefined4 uVar1;
  undefined1 auStack_10 [6];
  char local_a;
  
  FUN_0056c45c(auStack_10);
  if ((local_a == '\0' || local_a == '\x02') || (local_a == '\x04')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
