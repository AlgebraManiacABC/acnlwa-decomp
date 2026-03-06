/**
 * FUN_0011da44.c
 * Source line: 120770
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0011da44(int param_1,int param_2)

{
  int iVar1;
  
  if ((cRam00974f60 != '\0') && (*(int *)(param_1 + 8) == 0)) {
    iVar1 = FUN_00128cc4(0xae0f64,param_1,param_2 + 0xfffU & 0xfffff000,0);
    if (iVar1 == 0) {
      FUN_0012f204(0xd8601837);
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}
