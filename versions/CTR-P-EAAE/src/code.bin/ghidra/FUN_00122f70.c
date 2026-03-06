/**
 * FUN_00122f70.c
 * Source line: 125136
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00122f70(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = puRam0094d554;
  if (puRam0094d554 != NULL) {
    puRam0094d554 = NULL;
    (**(code **)*puVar2)();
    iVar1 = iRam0094d550;
    if (iRam0094d550 != 0) {
      FUN_002f76ac(iRam0094d550 + 0x14,&UNK_00137d74,4,2);
      FUN_002ffb64(iVar1);
    }
    iRam0094d550 = 0;
  }
  return;
}
