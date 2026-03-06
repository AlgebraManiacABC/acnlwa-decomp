/**
 * FUN_001288e8.c
 * Source line: 129945
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001288e8(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam00953860;
  if (puRam00953860 != NULL) {
    puRam00953860 = NULL;
    (**(code **)*puVar1)();
    FUN_002ffb64(uRam0095385c);
    uRam0095385c = 0;
  }
  return;
}
