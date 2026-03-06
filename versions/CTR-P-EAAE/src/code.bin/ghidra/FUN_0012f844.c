/**
 * FUN_0012f844.c
 * Source line: 136199
 * Body lines: 4
 */
#include "../../../include/types.h"

int FUN_0012f844(int param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x38) = param_2;
  return (int)cVar1;
}
