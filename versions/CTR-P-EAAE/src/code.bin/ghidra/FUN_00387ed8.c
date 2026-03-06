/**
 * FUN_00387ed8.c
 * Source line: 492994
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00387ed8(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_003cd24c();
  iVar1 = FUN_00391588(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x178));
  if (((iVar1 == 0) || (iVar1 = FUN_003cd24c(), *(char *)(iVar1 + 0x30) != '\0')) ||
     (*(char *)(param_1 + 0x1b1) != '\0')) {
    FUN_0035b994(&local_20);
    *(undefined4 *)(param_1 + 0x40) = local_20;
    *(undefined4 *)(param_1 + 0x44) = uStack_1c;
    *(code **)(param_1 + 0x50) = FUN_00388280;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined1 **)(param_1 + 0x58) = &LAB_00387f54;
  }
  return;
}
