/**
 * FUN_00710924.c
 * Source line: 1066794
 * Body lines: 7
 */
#include "../../../include/types.h"

void * FUN_00710924(int param_1,uint param_2)

{
  void *pvVar1;
  
  if ((param_2 < 0x12) && (*(char *)(param_1 + param_2 + 0x4a) == '\0')) {
    FUN_007699fc(param_1 + param_2 * 4 + 2);
    pvVar1 = GET_DAT_0095bf74();
    return pvVar1;
  }
  return NULL;
}
