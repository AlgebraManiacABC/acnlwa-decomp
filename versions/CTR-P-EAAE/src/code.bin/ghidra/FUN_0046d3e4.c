/**
 * FUN_0046d3e4.c
 * Source line: 638733
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_0046d3e4(char *param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_1 != NULL) {
    cVar1 = *param_1;
  }
  return param_1 != NULL && cVar1 != '\0';
}
