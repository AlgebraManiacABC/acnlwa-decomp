/**
 * FUN_001284cc.c
 * Source line: 129738
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001284cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam00953878;
  if (puRam00953878 != NULL) {
    puRam00953878 = NULL;
    (**(code **)*puVar1)();
    FUN_002ffb64(uRam00953874);
    uRam00953874 = 0;
  }
  return;
}
