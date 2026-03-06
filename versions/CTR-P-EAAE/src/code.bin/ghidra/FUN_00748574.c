/**
 * FUN_00748574.c
 * Source line: 1104424
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined2 FUN_00748574(ItemParam_t *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  
  uVar1 = (uint)param_1->field14_0x11;
  if ((uVar1 < 0x56) && (uVar1 != 0)) {
    puVar2 = (undefined2 *)(uVar1 * 2 + 0xa184e4);
  }
  else {
    puVar2 = (undefined2 *)&UNK_00887086;
  }
  return *puVar2;
}
