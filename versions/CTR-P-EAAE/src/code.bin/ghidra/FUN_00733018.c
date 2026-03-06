/**
 * FUN_00733018.c
 * Source line: 1088745
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined1 FUN_00733018(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      if ((*(int *)(iVar1 + 0xc) == *param_2) && (*(int *)(iVar1 + 0x10) == param_2[1])) {
        return *(undefined1 *)(iVar1 + 8);
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  return 0;
}
