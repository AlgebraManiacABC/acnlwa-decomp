/**
 * FUN_00320a4c.c
 * Source line: 423956
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00320a4c(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = param_2 == 0;
  if (bVar1) {
    param_2 = 0x1000403;
  }
  *(undefined4 *)(param_1 + 0xd0) = 0x100040d;
  *(undefined1 *)(param_1 + 0xdb) = 1;
  if (!bVar1) {
    param_2 = 0x10003f7;
  }
  *(undefined1 *)(param_1 + 0xdc) = 1;
  *(int *)(param_1 + 0xcc) = param_2;
  *(undefined1 *)(param_1 + 0xda) = 1;
  return;
}
