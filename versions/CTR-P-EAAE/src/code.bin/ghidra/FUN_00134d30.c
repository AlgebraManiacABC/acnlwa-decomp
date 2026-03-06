/**
 * FUN_00134d30.c
 * Source line: 141471
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined1 FUN_00134d30(void)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0013d028();
  if (((iVar1 != 0) && (iVar1 = FUN_0013d028(), iVar1 != 0)) &&
     (iVar1 = FUN_0013d138(), iVar1 != -4)) {
    uVar2 = *(undefined1 *)(iVar1 + 0xac);
  }
  return uVar2;
}
