/**
 * FUN_006cbf6c.c
 * Source line: 1028621
 * Body lines: 11
 */
#include "../../../include/types.h"

void * FUN_006cbf6c(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = 0;
  while (((byte)(&UNK_0088e4ec)[uVar2] != param_1 && ((byte)(&UNK_0088e4ed)[uVar2] != param_1))) {
    uVar2 += 2;
    if (9 < uVar2) {
      return NULL;
    }
  }
  pvVar1 = GET_DAT_0095bf74();
  return pvVar1;
}
