/**
 * FUN_001bf228.c
 * Source line: 226324
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_001bf228(int *param_1)

{
  int iVar1;
  
  FUN_00578c6c();
  iVar1 = (**(code **)(*param_1 + 0x178))(param_1);
  if (((iVar1 != 0) && (-1 < (int)((uint)*(byte *)((int)param_1 + 0xb07) << 0x1b))) &&
     (iVar1 = FUN_00578054(param_1), iVar1 != 0)) {
    iVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    *(undefined1 *)(iVar1 + 0x275) = 1;
  }
  return 1;
}
