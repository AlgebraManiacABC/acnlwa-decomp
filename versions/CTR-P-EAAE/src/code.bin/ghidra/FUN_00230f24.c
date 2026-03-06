/**
 * FUN_00230f24.c
 * Source line: 285762
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined1 * FUN_00230f24(int *param_1)

{
  int iVar1;
  undefined1 local_38 [44];
  undefined1 local_c [4];
  
  FUN_0081e8d0(local_38);
  iVar1 = (**(code **)(*param_1 + 0x138))(param_1,local_38,local_c);
  if (iVar1 != 0) {
    FUN_005dd570(param_1,local_38,local_c[0]);
  }
  return local_38;
}
