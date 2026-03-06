/**
 * FUN_0024b7f8.c
 * Source line: 299603
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0024b7f8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_00303534(param_1 + iVar1 * 8,0);
    iVar1 += 1;
  } while (iVar1 < 0x18);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  FUN_00303534(param_1 + 0xd8);
  FUN_00303534(param_1 + 0xe0,0);
  return;
}
