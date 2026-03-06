/**
 * FUN_005a8fd0.c
 * Source line: 855946
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_005a8fd0(int param_1)

{
  int iVar1;
  undefined1 auStack_a0 [88];
  undefined1 auStack_48 [64];
  
  FUN_005ad690(auStack_48,0x1e,*(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               (int)*(char *)(param_1 + 0x18));
  FUN_005ac5dc(auStack_a0,0x2c,*(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               (int)*(char *)(param_1 + 0x18));
  iVar1 = FUN_005ac2bc(*(undefined1 *)(param_1 + 0x10),auStack_48,0);
  if (iVar1 == 0) {
    FUN_005a3c04(param_1,*(undefined1 *)(param_1 + 0x10),auStack_a0,*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20));
    iVar1 = (int)*(char *)(param_1 + 8);
  }
  return iVar1;
}
