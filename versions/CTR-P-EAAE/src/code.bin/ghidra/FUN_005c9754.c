/**
 * FUN_005c9754.c
 * Source line: 877923
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined2 FUN_005c9754(uint param_1)

{
  int iVar1;
  undefined2 local_4;
  
  if (0xfb < param_1) {
    param_1 = 0x12;
  }
  iVar1 = param_1 * 4;
  local_4 = CONCAT11(((&UNK_0088b94b)[iVar1] - (&UNK_0088b949)[iVar1]) + '\x01',
                     ((&UNK_0088b94a)[iVar1] - (&UNK_0088b948)[iVar1]) + '\x01');
  return local_4;
}
