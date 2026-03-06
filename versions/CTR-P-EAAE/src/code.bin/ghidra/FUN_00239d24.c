/**
 * FUN_00239d24.c
 * Source line: 290701
 * Body lines: 12
 */
#include "../../../include/types.h"

bool FUN_00239d24(int *param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  bool bVar2;
  
  FUN_0023a680();
  bVar2 = *(char *)((int)param_1 + 0xe) == '\x04';
  if (bVar2) {
    *(undefined1 *)((int)param_1 + 0xe) = 2;
    *(undefined2 *)((int)param_1 + 0x12) = param_3;
    uVar1 = FUN_007521a4(*(undefined4 *)(*param_1 + 0xf0),param_2);
    *(undefined2 *)(param_1 + 4) = uVar1;
    *(undefined1 *)((int)param_1 + 0x17) = 1;
  }
  return bVar2;
}
