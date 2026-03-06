/**
 * FUN_0045be20.c
 * Source line: 624814
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0045be20(void)

{
  if (piRam0097d430 != NULL) {
    (**(code **)(*piRam0097d430 + 4))();
    piRam0097d430 = NULL;
  }
  return;
}
