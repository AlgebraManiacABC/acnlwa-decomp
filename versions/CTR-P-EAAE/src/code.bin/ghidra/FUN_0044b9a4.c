/**
 * FUN_0044b9a4.c
 * Source line: 612480
 * Body lines: 14
 */
#include "../../../include/types.h"

FUN_0044b9a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(char *)(param_1 + 0x90) != '\x01') && (*(char *)(param_1 + 0x70) == '\x01')) &&
     (iVar1 = FUN_0073264c(*(undefined4 *)(param_1 + 0x48)), iVar1 == 0)) {
    if ((*(char *)(param_1 + 0xa4) != '\0') && (*(char *)(param_1 + 0x90) != '\x01')) {
      FUN_0042632c(param_1 + 0x90);
      *(undefined1 *)(param_1 + 0xa4) = 0;
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      uVar2 = FUN_004395a4(*(int *)(param_1 + 0x48),param_1 + 0x90,param_4,param_2,param_3,param_5);
      return uVar2;
    }
  }
  return 0xe0a14827;
}
