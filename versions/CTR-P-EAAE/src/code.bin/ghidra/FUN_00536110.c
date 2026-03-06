/**
 * FUN_00536110.c
 * Source line: 777665
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 FUN_00536110(uint param_1)

{
  undefined2 *puVar1;
  
  if (param_1 < 0x56) {
    puVar1 = (undefined2 *)(param_1 * 2 + 0xa184e4);
  }
  else {
    puVar1 = (undefined2 *)&UNK_00887086;
  }
  return *puVar1;
}
