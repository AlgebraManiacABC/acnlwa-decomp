/**
 * FUN_00723e4c.c
 * Source line: 1078711
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00723e4c(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x30) != 0x276) {
    iVar2 = FUN_0076f954(&DAT_00a14b5c,*(undefined2 *)(param_1 + 0x26));
    if (*(int *)(iVar2 + 4) == 0) {
      sVar1 = 0xf7;
    }
    else {
      sVar1 = *(short *)(param_1 + 0x26);
    }
    if (sVar1 == *(short *)(param_1 + 0x30)) {
      return 1;
    }
  }
  return 0;
}
