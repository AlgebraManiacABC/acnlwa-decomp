/**
 * FUN_005e428c.c
 * Source line: 894154
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005e428c(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4);
  if ((*(char *)(iVar1 + 0x1e) != '\0') && (*(char *)(*(int *)(iVar1 + 900) + 0x18) != '\0')) {
    *(undefined1 *)(iVar1 + 0x1e) = 0;
  }
  if ((((*(char *)(*(int *)(*param_1 + 4) + 4) == '\x03') &&
       (iVar1 = FUN_0075ad18(*(undefined4 *)(*(int *)(*param_1 + 4) + 0x360)), iVar1 == 0)) &&
      (0 < param_1[2])) &&
     ((iVar1 = param_1[2] + -1, param_1[2] = iVar1, iVar1 < 1 &&
      (*(char *)(*(int *)(*(int *)(*param_1 + 4) + 900) + 4) != '\0')))) {
    FUN_0032ae8c(DAT_0094ccb8);
    return;
  }
  return;
}
