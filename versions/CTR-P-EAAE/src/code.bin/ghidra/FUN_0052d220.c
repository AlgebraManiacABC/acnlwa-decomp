/**
 * FUN_0052d220.c
 * Source line: 772102
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0052d220(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(iVar1 * 8 + 0x9ab598) == param_1) {
      return *(undefined4 *)(iVar1 * 8 + 0x9ab59c);
    }
    if (*(int *)(iVar1 * 8 + 0x9ab5a0) == param_1) break;
    iVar1 += 2;
    if (5 < iVar1) {
      return 0;
    }
  }
  return *(undefined4 *)(iVar1 * 8 + 0x9ab5a4);
}
