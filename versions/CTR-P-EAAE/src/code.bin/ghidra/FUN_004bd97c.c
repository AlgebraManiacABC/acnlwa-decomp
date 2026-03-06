/**
 * FUN_004bd97c.c
 * Source line: 699666
 * Body lines: 2
 */
#include "../../../include/types.h"

int FUN_004bd97c(int param_1)

{
  return ((uint)(*(int *)(param_1 + 0x2c) << 0x1e) >> 0x19) +
         ((uint)(*(int *)(param_1 + 0x2c) << 0x1c) >> 0x1e) * 0x14 + *(int *)(param_1 + 0x34);
}
