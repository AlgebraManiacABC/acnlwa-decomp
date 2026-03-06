/**
 * FUN_0013bb88.c
 * Source line: 148320
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_0013bb88(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x30) != 0;
  if (bVar1) {
    FUN_00135740(0xae563c);
    FUN_0013ef38(*(undefined4 *)(param_1 + 0x30),param_1);
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_00137e84(0xae563c);
  }
  return bVar1;
}
