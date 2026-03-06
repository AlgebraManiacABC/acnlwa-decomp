/**
 * FUN_0026a7d4.c
 * Source line: 315045
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0026a7d4(int param_1)

{
  int iVar1;
  
  if ((*(char *)(*(int *)(param_1 + 0x121c) + 0x554) != '\0') ||
     (iVar1 = FUN_0026aee4(param_1,1), iVar1 == 0)) {
    FUN_006e9c2c(0x40c00000,*(int *)(param_1 + 0x121c) + 0x78,0);
    *(undefined4 *)(param_1 + 0x1220) = 0;
  }
  return;
}
