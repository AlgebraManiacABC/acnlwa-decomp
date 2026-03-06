/**
 * FUN_004c7ff4.c
 * Source line: 707739
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_004c7ff4(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 400) != '\0') && (0x53 < param_3)) {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004c6964(param_2,param_1 + 0x11c,param_4,param_5,&UNK_004c810c,param_1);
    }
    if (*(char *)(iVar1 + 0x50) != '\0') {
      return iVar1;
    }
  }
  return 0;
}
