/**
 * FUN_00759910.c
 * Source line: 1114662
 * Body lines: 12
 */
#include "../../../include/types.h"

bool FUN_00759910(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xc) != '\0';
  if (*(char *)(param_1 + 0xd) != '\0') {
    cVar1 += '\x01';
  }
  if (*(char *)(param_1 + 0xe) != '\0') {
    cVar1 += '\x01';
  }
  if (*(char *)(param_1 + 0xf) != '\0') {
    cVar1 += '\x01';
  }
  return cVar1 == '\0';
}
