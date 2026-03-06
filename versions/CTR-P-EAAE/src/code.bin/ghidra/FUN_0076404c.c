/**
 * FUN_0076404c.c
 * Source line: 1122800
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_0076404c(int param_1)

{
  int *piVar1;
  
  if ((((DAT_009506b0 == -1) && (DAT_009506b4 != 0)) &&
      (piVar1 = (int *)FUN_006de398(), piVar1 != NULL)) && (*(char *)((int)piVar1 + 0xe) != '\0')) {
    (**(code **)(*piVar1 + 0x7c))(piVar1,1,*(undefined1 *)(param_1 + 0x1ac));
    return 1;
  }
  return 0;
}
