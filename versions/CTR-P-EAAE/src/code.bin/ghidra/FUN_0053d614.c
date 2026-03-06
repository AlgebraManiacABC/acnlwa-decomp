/**
 * FUN_0053d614.c
 * Source line: 782553
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0053d614(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0097d420;
  if (puRam0097d420 != NULL) {
    puRam0097d420 = NULL;
    (**(code **)*puVar1)();
    puVar1 = puRam0097d41c;
    if (puRam0097d41c != NULL) {
      (**(code **)*puRam0097d41c)(puRam0097d41c);
      FUN_0053814c(puVar1);
    }
    puRam0097d41c = NULL;
  }
  return;
}
