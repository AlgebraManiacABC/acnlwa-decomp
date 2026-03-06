/**
 * FUN_0028dcbc.c
 * Source line: 333401
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0028dcbc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_002fb918();
  __rt_memcpy_w(iVar1 + 0x16ea8,param_1 + 0x5514,0x68);
  *(undefined1 *)(param_1 + 0x55b8) = 3;
  return;
}
