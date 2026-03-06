/**
 * FUN_00127d54.c
 * Source line: 129334
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00127d54(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0095322c;
  if (DAT_0095322c != NULL) {
    DAT_0095322c = NULL;
    (**(code **)*puVar2)();
    iVar1 = DAT_00953228;
    if (DAT_00953228 != 0) {
      FUN_002f76ac(DAT_00953228 + 0x10,NOP_002f777c,4);
      FUN_002ffb64(iVar1);
    }
    DAT_00953228 = 0;
  }
  return;
}
