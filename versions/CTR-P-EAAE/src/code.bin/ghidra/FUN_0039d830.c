/**
 * FUN_0039d830.c
 * Source line: 506412
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0039d830(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_003cd24c();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
  }
  return uVar2;
}
