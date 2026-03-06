/**
 * FUN_0011d7ec.c
 * Source line: 120663
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined * FUN_0011d7ec(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  if (((param_2 != NULL) && (*param_2 != '\0')) && (iVar1 = strcmp("C",param_2), iVar1 != 0)) {
    return NULL;
  }
  return &DAT_00944408;
}
