#include "../../../include/types.h"

void FUN_004ca364(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  *(undefined1 *)((int)param_2 + 0x17) = 0;
  *(undefined1 *)((int)param_2 + 0x15) = 0;
  param_2[2] = 0;
  uVar1 = FUN_004ce268();
  FUN_004ce594(uVar1,param_2);
  *(undefined1 *)(param_2 + 5) = 0;
  if ((code *)param_2[3] != NULL) {
    (*(code *)param_2[3])(param_2,3,param_2[4]);
    return;
  }
  return;
}
