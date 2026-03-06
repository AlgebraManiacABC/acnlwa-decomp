/**
 * FUN_00429654.c
 * Source line: 593044
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00429654(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = puRam00974a18;
  if (puRam00974a18 != NULL) {
    piVar1 = puRam00974a18 + 0x12;
    *puRam00974a18 = &UNK_0090057c;
    if (*piVar1 != 0) {
      FUN_00427d88();
      FUN_004260c4();
    }
    FUN_004260c4(puVar2);
    puRam00974a18 = NULL;
  }
  return;
}
