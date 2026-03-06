/**
 * FUN_0061fad8.c
 * Source line: 934821
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0061fad8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00953628;
  if (DAT_00953628 != NULL) {
    DAT_00953628 = NULL;
    (**(code **)*puVar2)();
    iVar1 = DAT_00953624;
    if (DAT_00953624 != 0) {
      FUN_002f76ac(DAT_00953624 + 0x4980,&DAT_0061fd64,0x214,100);
      FUN_002ffb64(iVar1);
    }
    DAT_00953624 = 0;
  }
  return;
}
