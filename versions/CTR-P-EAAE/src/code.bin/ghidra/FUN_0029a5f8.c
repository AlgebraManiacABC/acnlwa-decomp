/**
 * FUN_0029a5f8.c
 * Source line: 339605
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0029a5f8(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xd4) = 0x20c;
  *(undefined2 *)(param_1 + 0xd0) = 0xb;
  *(undefined4 *)(param_1 + 0xcc) = 7;
  iVar1 = FUN_006d1e64();
  *(undefined1 *)(iVar1 + 0x40) = 1;
  iVar1 = FUN_006d1e64();
  FUN_001fa354(*(undefined4 *)(iVar1 + 500));
  *(char *)(DAT_0094fd3c + 0x1fc) = (char)*(undefined4 *)(param_1 + 0xcc);
  iVar1 = FUN_006d1e64();
  FUN_001fa354(*(undefined4 *)(iVar1 + 500));
  *(undefined1 *)(iVar1 + 0x40) = 0;
  return;
}
