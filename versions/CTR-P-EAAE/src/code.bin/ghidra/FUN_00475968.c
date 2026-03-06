/**
 * FUN_00475968.c
 * Source line: 645217
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00475968(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (((param_3 < 4) && (*(char *)(param_2 + 0x4a) != '\0')) &&
     (iVar1 = param_2 + 0x2004 + (param_3 + 0xb) * 0xc, *(char *)(iVar1 + 0xb) != '\0')) {
    *param_1 = *(undefined4 *)(iVar1 + 4);
    iVar1 = *(int *)(param_2 + 0x2004 + (param_3 + 0xb) * 0xc);
    param_1[1] = iVar1;
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
