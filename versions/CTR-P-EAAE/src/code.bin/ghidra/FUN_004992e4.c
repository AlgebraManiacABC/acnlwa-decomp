/**
 * FUN_004992e4.c
 * Source line: 671702
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004992e4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 4;
    iVar2 += 1;
    *(undefined4 *)(iVar1 + 0xae3f50) = 0;
  } while (iVar2 < 0x18);
  return;
}
