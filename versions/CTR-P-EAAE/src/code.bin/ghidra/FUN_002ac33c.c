/**
 * FUN_002ac33c.c
 * Source line: 349715
 * Body lines: 4
 */
#include "../../../include/types.h"

int FUN_002ac33c(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x1208);
  *(undefined1 *)(param_1 + 0x1208) = 0xff;
  return (int)cVar1;
}
