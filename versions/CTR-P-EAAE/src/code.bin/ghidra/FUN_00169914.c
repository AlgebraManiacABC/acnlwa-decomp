/**
 * FUN_00169914.c
 * Source line: 182574
 * Body lines: 8
 */
#include "../../../include/types.h"

void * FUN_00169914(int param_1)

{
  void *pvVar1;
  undefined1 local_12;
  
  local_12 = (char)((uint)*(undefined4 *)(param_1 + 4) >> 0x10);
  if (local_12 != '\x01') {
    return NULL;
  }
  pvVar1 = GET_DAT_0095bf74();
  return pvVar1;
}
