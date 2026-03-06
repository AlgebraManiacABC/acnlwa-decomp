/**
 * FUN_001c0fdc.c
 * Source line: 228215
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_001c0fdc(void)

{
  int iVar1;
  
  iVar1 = FUN_001da01c();
  *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
  *(undefined1 *)(iVar1 + 0xe8) = 0;
  return;
}
