#include "../../../include/types.h"

void FUN_00393b50(undefined4 *param_1)

{
  int iVar1;
  
  param_1[9] = 0;
  *param_1 = &UNK_008fc620;
  FUN_003937f8(param_1);
  iVar1 = FUN_00378054(param_1);
  if (*(code **)(iVar1 + -8) != NULL) {
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
