/**
 * FUN_00237048.c
 * Source line: 288860
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined1 * FUN_00237048(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_40 [44];
  undefined1 local_14 [8];
  
  FUN_0081e8d0(local_40);
  if (((param_1[0x93] != 0) && (iVar1 = *(int *)(param_1[0x93] + 4), iVar1 != 0)) &&
     (iVar2 = (**(code **)(*param_1 + 0x138))(param_1,local_40,local_14), iVar2 != 0)) {
    FUN_005e19b8(*(undefined4 *)(iVar1 + 0x360),local_40,local_14[0]);
  }
  return local_40;
}
