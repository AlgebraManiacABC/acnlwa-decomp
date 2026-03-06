/**
 * FUN_0012c870.c
 * Source line: 133342
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0012c870(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = puRam00975c0c;
  if (puRam00975c0c != NULL) {
    puRam00975c0c = NULL;
    (**(code **)*puVar1)();
    if (iRam00975c08 != 0) {
      iVar2 = FUN_00137e8c(iRam00975c08 + 0x30);
      FUN_002ffb64(iVar2 + -0x30);
    }
    iRam00975c08 = 0;
  }
  return;
}
