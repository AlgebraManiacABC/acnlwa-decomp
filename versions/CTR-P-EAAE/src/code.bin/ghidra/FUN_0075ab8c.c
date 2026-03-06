/**
 * FUN_0075ab8c.c
 * Source line: 1115776
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined1 FUN_0075ab8c(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int local_38 [12];
  
  uVar2 = FUN_0081e8d0(local_38);
  FUN_0056d374(uVar2,4);
  puVar3 = (undefined1 *)(**(code **)(local_38[0] + 0x28))(local_38);
  uVar1 = 4;
  if (puVar3 != NULL) {
    uVar1 = *puVar3;
  }
  return uVar1;
}
