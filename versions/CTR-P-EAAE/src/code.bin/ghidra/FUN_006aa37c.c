/**
 * FUN_006aa37c.c
 * Source line: 1005981
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 * FUN_006aa37c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  FUN_0075cd40(&local_10,param_1);
  *(undefined4 *)(param_1 + 0x78) = local_10;
  return &local_10;
}
