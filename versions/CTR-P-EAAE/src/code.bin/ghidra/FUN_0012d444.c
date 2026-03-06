/**
 * FUN_0012d444.c
 * Source line: 133967
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0012d444(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = puRam0095c6d4;
  if (puRam0095c6d4 != NULL) {
    puRam0095c6d4 = NULL;
    (**(code **)*puVar2)();
    iVar1 = DAT_0095c6d0;
    if (DAT_0095c6d0 != 0) {
      FUN_002f76ac(DAT_0095c6d0 + 0xec,NOP_002f777c,4,8);
      FUN_002ffb64(iVar1);
    }
    DAT_0095c6d0 = 0;
  }
  return;
}
