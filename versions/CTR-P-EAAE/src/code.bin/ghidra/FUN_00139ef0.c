/**
 * FUN_00139ef0.c
 * Source line: 146853
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00139ef0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = puRam0094cd24;
  if (puRam0094cd24 != NULL) {
    puRam0094cd24 = NULL;
    (**(code **)*puVar2)();
    iVar1 = iRam0094cd20;
    if (iRam0094cd20 != 0) {
      FUN_002f76ac(iRam0094cd20 + 0x2c,FUN_0013d73c,0x18,6);
      FUN_002ffb64(iVar1);
    }
    iRam0094cd20 = 0;
  }
  return;
}
