/**
 * FUN_0048dfb0.c
 * Source line: 663633
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0048dfb0(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x6c);
  nnnstdMemCpy(_DAT_00974a7c,*(undefined4 *)(param_2 + 0x68));
  _DAT_00974a7c = _DAT_00974a7c + (uVar1 & 0xfffffffc);
  return;
}
