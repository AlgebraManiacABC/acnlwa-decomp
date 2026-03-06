/**
 * FUN_00142104.c
 * Source line: 154538
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined * FUN_00142104(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  if (((param_2 != NULL) && (*param_2 != '\0')) && (iVar1 = strcmp("C",param_2), iVar1 != 0)) {
    return NULL;
  }
  return &DAT_009442f8;
}
