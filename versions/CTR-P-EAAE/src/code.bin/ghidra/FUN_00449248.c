/**
 * FUN_00449248.c
 * Source line: 610789
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00449248(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x66) == '\x02') {
    *(undefined4 *)(param_1 + 0x40) = param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0a14827;
  }
  return uVar1;
}
