/**
 * FUN_0033f030.c
 * Source line: 439070
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0033f030(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x18))(param_1), iVar1 == 0)) {
    (**(code **)(*param_1 + 0x24))(param_1);
    if (((param_1[0x35] & 1U) == 0) &&
       (iVar1 = FUN_006d1e64(), (*(ushort *)(param_1 + 0x34) & 4) != 0)) {
      if (*(char *)(iVar1 + 0x40) == '\0') {
        *(undefined1 *)(iVar1 + 0x40) = 1;
      }
      *(undefined1 *)((int)param_1 + 0xd2) = *(undefined1 *)(DAT_0094fd3c + 0x1fd);
      (**(code **)(*param_1 + 0x1c))(param_1);
      *(undefined1 *)(DAT_0094fd3c + 0x1fd) = *(undefined1 *)((int)param_1 + 0xd2);
    }
  }
  return;
}
