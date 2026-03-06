/**
 * FUN_0055c27c.c
 * Source line: 802209
 * Body lines: 2
 */
#include "../../../include/types.h"

int FUN_0055c27c(int param_1,int param_2)

{
  __rt_memcpy_w(param_2,param_1 + 0x398a4,*(uint *)(param_1 + 0x39aa4));
  return (*(uint *)(param_1 + 0x39aa4) & 0xfffffffc) + param_2;
}
