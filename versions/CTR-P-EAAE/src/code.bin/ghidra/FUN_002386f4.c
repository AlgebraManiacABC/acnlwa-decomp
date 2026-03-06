/**
 * FUN_002386f4.c
 * Source line: 289658
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined1 * FUN_002386f4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_40 [44];
  undefined1 local_14 [8];
  
  FUN_0081e8d0(local_40);
  if (((*(int *)(param_1 + 0x24c) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x24c) + 4), iVar1 != 0)) &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x250) + 0x138))
                        (*(int **)(param_1 + 0x250),local_40,local_14), iVar2 != 0)) {
    FUN_005e19b8(*(undefined4 *)(iVar1 + 0x360),local_40,local_14[0]);
  }
  return local_40;
}
