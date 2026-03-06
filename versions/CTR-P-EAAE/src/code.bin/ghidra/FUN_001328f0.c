/**
 * FUN_001328f0.c
 * Source line: 139102
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001328f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam009514c0;
  if (puRam009514c0 != NULL) {
    puRam009514c0 = NULL;
    (**(code **)*puVar1)();
    if (piRam009514bc != NULL) {
      (**(code **)(*piRam009514bc + 4))();
    }
    piRam009514bc = NULL;
  }
  return;
}
