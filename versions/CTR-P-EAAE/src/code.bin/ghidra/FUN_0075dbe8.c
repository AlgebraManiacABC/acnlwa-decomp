/**
 * FUN_0075dbe8.c
 * Source line: 1118202
 * Body lines: 1
 */
#include "../../../include/types.h"

bool FUN_0075dbe8(uint *param_1,uint param_2)

{
  return (*param_1 & ~param_1[1] & param_2) != 0;
}
