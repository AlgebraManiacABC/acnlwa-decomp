/**
 * FUN_0028dcf4.c
 * Source line: 333414
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0028dcf4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_002fb918();
  __rt_memcpy_w(param_1 + 0x5514,iVar1 + 0x16ea8,0x68);
  *(undefined1 *)(param_1 + 0x55b8) = 1;
  return;
}
