/**
 * FUN_00602234.c
 * Source line: 918197
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00602234(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_0076f9fc(*(int *)(param_1 + 0x340) + 0x14);
  if (iVar2 != 1) {
    if ((*(char *)(param_1 + 6) == '\x05') || (*(char *)(param_1 + 0x1d) != '\0')) {
      FUN_00603d04(param_1);
      uVar1 = 0;
    }
    else {
      FUN_005fbc20(*(undefined4 *)(param_1 + 0x348));
      uVar1 = 7;
    }
    *(undefined1 *)(param_1 + 5) = uVar1;
  }
  return;
}
