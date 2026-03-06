/**
 * FUN_00582aa4.c
 * Source line: 827760
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00582aa4(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = param_1 + 0x20;
  for (; param_1 < puVar2; param_1 = param_1 + 0x10) {
    for (puVar1 = param_1; puVar1 < param_1 + 0x10; puVar1 = puVar1 + 1) {
      *puVar1 = 0xffff;
    }
  }
  return;
}
