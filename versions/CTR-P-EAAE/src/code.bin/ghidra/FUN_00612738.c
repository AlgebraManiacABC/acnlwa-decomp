/**
 * FUN_00612738.c
 * Source line: 926170
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined * FUN_00612738(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_005b3ec4();
  if (iVar1 != 0) {
    if (((uRam0095722c & 1) == 0) && (iVar1 = FUN_002fe7dc(0x95722c), iVar1 != 0)) {
      Item_Clear((Item_t *)0x957230);
    }
    puVar2 = GET_DAT_0095bf74();
    return puVar2;
  }
  return &DAT_0095bfdc;
}
