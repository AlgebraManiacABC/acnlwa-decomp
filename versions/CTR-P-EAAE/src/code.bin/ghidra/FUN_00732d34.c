/**
 * FUN_00732d34.c
 * Source line: 1088564
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00732d34(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      if ((*(int *)(iVar1 + 0xc) == *param_2) && (*(int *)(iVar1 + 0x10) == param_2[1])) {
        *param_3 = *(undefined4 *)(iVar1 + 0x14);
        return 1;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  return 0;
}
