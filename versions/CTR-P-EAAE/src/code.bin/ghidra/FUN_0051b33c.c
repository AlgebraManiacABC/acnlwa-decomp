/**
 * FUN_0051b33c.c
 * Source line: 760687
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0051b33c(int *param_1)

{
  int iVar1;
  
  if ((undefined4 *)param_1[0x24] != NULL) {
    (*(code *)**(undefined4 **)param_1[0x24])();
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    (**(code **)(*param_1 + 0x2c))(param_1,iVar1 + 2);
    param_1[0x24] = 0;
  }
  return;
}
