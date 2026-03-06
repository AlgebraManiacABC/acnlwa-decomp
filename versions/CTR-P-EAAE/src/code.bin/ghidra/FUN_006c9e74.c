/**
 * FUN_006c9e74.c
 * Source line: 1027010
 * Body lines: 2
 */
#include "../../../include/types.h"

int FUN_006c9e74(int param_1,int param_2)

{
  __rt_memcpy_w(param_2,*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
  return (*(uint *)(param_1 + 0xcc) & 0xfffffffc) + param_2;
}
