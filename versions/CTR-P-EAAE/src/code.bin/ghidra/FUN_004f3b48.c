/**
 * FUN_004f3b48.c
 * Source line: 740970
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_004f3b48(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(&UNK_00896f28 + iVar1 * 8) == param_2) {
      return *(undefined4 *)(&UNK_00896f2c + iVar1 * 8);
    }
    if (*(int *)(&UNK_00896f30 + iVar1 * 8) == param_2) break;
    iVar1 += 2;
    if (5 < iVar1) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(&UNK_00896f34 + iVar1 * 8);
}
