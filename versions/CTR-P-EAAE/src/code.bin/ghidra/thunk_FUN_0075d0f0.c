/**
 * thunk_FUN_0075d0f0.c
 * Source line: 410319
 * Body lines: 5
 */
#include "../../../include/types.h"

byte thunk_FUN_0075d0f0(int param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = *(char *)(param_1 + 4);
  bVar2 = FUN_0075ad18(*(undefined4 *)(param_1 + 0x360));
  return bVar2 & cVar1 == '\0';
}
