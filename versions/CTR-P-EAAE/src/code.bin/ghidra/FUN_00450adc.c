/**
 * FUN_00450adc.c
 * Source line: 616702
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_00450adc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00900d38;
  *(undefined1 *)(param_1 + 6) = 0;
  iVar1 = param_1[4];
  while (iVar1 != 0) {
    iVar1 = switchD_00228cb8::caseD_4();
    if ((iVar1 != 0) && ((int *)(iVar1 - param_1[5]) != NULL)) {
      (**(code **)(*(int *)(iVar1 - param_1[5]) + 4))();
    }
    iVar1 = param_1[4];
  }
  return param_1;
}
