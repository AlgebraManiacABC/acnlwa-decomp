/**
 * FUN_0023af68.c
 * Source line: 291521
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0023af68(int *param_1)

{
  (**(code **)(*param_1 + 0x100))(param_1);
  (**(code **)(*param_1 + 0x104))(param_1);
  if (*(char *)param_1[0x23] == '\0') {
    FUN_00602144(*(undefined4 *)(DAT_0095deac + 0x14),param_1);
    FUN_00602938(param_1[1],1);
    FUN_00813b80(param_1 + 0x40,1);
  }
  else {
    FUN_005ffd94(*(undefined4 *)(DAT_0095deac + 0x18),param_1 + 0x1f,
                 *(undefined4 *)(DAT_0095deac + 0x14));
    FUN_006001f0(param_1[0x21],0);
  }
          // WARNING: Could not recover jumptable at 0x0023b034. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x11c))(param_1);
  return;
}
