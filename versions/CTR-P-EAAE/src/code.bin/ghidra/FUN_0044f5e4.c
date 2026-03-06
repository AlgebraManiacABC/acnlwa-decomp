/**
 * FUN_0044f5e4.c
 * Source line: 615456
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0044f5e4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = puRam00974a6c;
  if (puRam00974a6c != NULL) {
    piVar1 = puRam00974a6c + 0xc;
    *puRam00974a6c = &UNK_00900d20;
    if (*piVar1 - 0x100000U < 0x3ff00000) {
      FUN_0044f6f4(puVar2);
    }
    FUN_004260c4(puVar2);
    puRam00974a6c = NULL;
  }
  return;
}
