/**
 * FUN_003cebf4.c
 * Source line: 540669
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_003cebf4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008fe944;
  if (*(char *)((int)param_1 + 9) != '\0') {
    iVar1 = *(int *)(param_1[1] + 8);
    if (iVar1 != 0) {
      iVar1 = FUN_0039e064(iVar1 + 0x94,*(undefined1 *)(param_1[1] + 4),0xf);
      *(bool *)((int)param_1 + 9) = iVar1 == 0;
    }
    FUN_003cea64(param_1);
  }
  if ((int *)param_1[1] != NULL) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}
