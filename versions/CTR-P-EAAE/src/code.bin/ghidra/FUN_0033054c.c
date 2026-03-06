/**
 * FUN_0033054c.c
 * Source line: 433741
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0033054c(int param_1)

{
  int iVar1;
  
  if ((*(undefined4 **)(param_1 + 0xf0) != NULL) &&
     (iVar1 = (**(code **)**(undefined4 **)(param_1 + 0xf0))(), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  return;
}
