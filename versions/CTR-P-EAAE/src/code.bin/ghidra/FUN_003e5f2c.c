/**
 * FUN_003e5f2c.c
 * Source line: 559141
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_003e5f2c(int param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_38 [44];
  
  FUN_00450d54(auStack_38);
  iVar1 = FUN_00406b7c(*(undefined4 *)(param_1 + 0xa0),param_2,auStack_38);
  if (iVar1 != 0) {
    (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),0x8000,0);
    FUN_00450df0(param_2,auStack_38);
    (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),0x8000,0);
    FUN_00450dc8(auStack_38);
    return 1;
  }
  FUN_00450dc8(auStack_38);
  return 0;
}
