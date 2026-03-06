/**
 * FUN_00599784.c
 * Source line: 845953
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00599784(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x12;
    *(undefined1 *)(iVar1 + 0x9b418a) = 0;
    *(undefined1 *)(iVar1 + 0x9b418b) = 0;
    *(char *)(iVar1 + 0x9b418c) = (char)iVar2;
    iVar2 += 1;
  } while (iVar2 < 4);
  uRam009526b5 = 0;
  uRam009526b0 = 0xffff;
  return;
}
