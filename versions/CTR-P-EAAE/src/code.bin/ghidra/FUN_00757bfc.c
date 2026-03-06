/**
 * FUN_00757bfc.c
 * Source line: 1113194
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00757bfc(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_00300f4c();
  *(undefined4 *)(iVar1 + 8) = 1;
  pvVar2 = GET_DAT_0095bf74();
  FUN_00757f08((int)pvVar2 + 0x80);
  FUN_0070ef54((int)pvVar2 + 0x71900);
  return;
}
