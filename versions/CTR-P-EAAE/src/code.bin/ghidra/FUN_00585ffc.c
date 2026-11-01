#include "../../../include/types.h"

void FUN_00585ffc(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_006a5b68();
  if (iVar1 != 0) {
    iVar1 = FUN_00584134();
    *(undefined1 *)(iVar1 + 0x32) = 1;
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}
