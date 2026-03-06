/**
 * FUN_005c2cbc.c
 * Source line: 872370
 * Body lines: 6
 */
#include "../../../include/types.h"

char * FUN_005c2cbc(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_005c33d0(param_1,0);
  if ((pcVar1 != NULL) && (pcVar1 = pcVar1 + 0x870, *pcVar1 == '\v')) {
    pcVar1 = NULL;
  }
  return pcVar1;
}
