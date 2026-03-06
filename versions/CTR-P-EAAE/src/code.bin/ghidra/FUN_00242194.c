/**
 * FUN_00242194.c
 * Source line: 295162
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00242194(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)&DAT_00ab7df4;
  if (param_1 < 0xe) {
    puVar1 = (undefined4 *)(&DAT_00ab7df4 + param_1 * 4);
  }
  return *puVar1;
}
