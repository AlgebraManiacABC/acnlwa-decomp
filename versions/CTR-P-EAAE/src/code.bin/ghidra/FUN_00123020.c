/**
 * FUN_00123020.c
 * Source line: 125177
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00123020(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = puRam0094d544;
  if (puRam0094d544 != NULL) {
    puRam0094d544 = NULL;
    (**(code **)*puVar2)();
    iVar1 = iRam0094d540;
    if (iRam0094d540 != 0) {
      FUN_00136cc8(iRam0094d540 + 0x10);
      FUN_002ffb64(iVar1);
    }
    iRam0094d540 = 0;
  }
  return;
}
