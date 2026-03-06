/**
 * FUN_001262a0.c
 * Source line: 128005
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001262a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0094ddd4;
  if (puRam0094ddd4 != NULL) {
    puRam0094ddd4 = NULL;
    (**(code **)*puVar1)();
    FUN_002ffb64(_DAT_0094ddd0);
    _DAT_0094ddd0 = 0;
  }
  return;
}
