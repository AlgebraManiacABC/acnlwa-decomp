/**
 * FUN_00754080.c
 * Source line: 1109752
 * Body lines: 1
 */
#include "../../../include/types.h"

uint FUN_00754080(int param_1)

{
  return (*(uint *)(param_1 + 0x30) & 0xf80) >> 7;
}
