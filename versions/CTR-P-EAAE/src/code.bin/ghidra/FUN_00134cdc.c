/**
 * FUN_00134cdc.c
 * Source line: 141451
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00134cdc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_0013d028();
  if ((((iVar1 != 0) && (iVar1 = FUN_001396a4(), iVar1 == 0)) &&
      (iVar1 = FUN_0013d028(), iVar1 != 0)) && (iVar1 = FUN_0013d138(), iVar1 != -4)) {
    *(undefined1 *)(iVar1 + 0xac) = 0;
    *(undefined4 *)(iVar1 + 0xa8) = 0;
    uVar2 = 0;
    *(undefined4 *)(iVar1 + 0xa4) = 0;
  }
  return uVar2;
}
