/**
 * FUN_00544598.c
 * Source line: 787342
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00544598(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x14];
  *param_1 = &UNK_00904734;
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 4))(piVar1);
    param_1[0x14] = 0;
  }
  FUN_0053e958(param_1);
  FUN_002ffb64();
  return;
}
