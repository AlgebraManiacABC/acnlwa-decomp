/**
 * FUN_00239cd0.c
 * Source line: 290683
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_00239cd0(int *param_1,undefined1 param_2)

{
  bool bVar1;
  
  FUN_0023a680();
  bVar1 = *(char *)((int)param_1 + 0xe) == '\x04';
  if (bVar1) {
    *(undefined1 *)((int)param_1 + 0xe) = 3;
    *(undefined2 *)((int)param_1 + 0x12) = DAT_009537c0._2_2_;
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(*(int *)(*param_1 + 0xf0) + 0x2e);
    *(undefined1 *)((int)param_1 + 0x17) = param_2;
  }
  return bVar1;
}
