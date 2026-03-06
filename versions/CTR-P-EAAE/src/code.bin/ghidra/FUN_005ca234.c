/**
 * FUN_005ca234.c
 * Source line: 878239
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined * FUN_005ca234(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0xfc) {
    puVar1 = &UNK_0088b948 + param_1 * 4;
  }
  else {
    puVar1 = &UNK_0088b990;
  }
  return puVar1;
}
