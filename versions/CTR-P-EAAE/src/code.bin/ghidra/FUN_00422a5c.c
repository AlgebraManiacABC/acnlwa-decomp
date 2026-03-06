/**
 * FUN_00422a5c.c
 * Source line: 587866
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00422a5c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  FUN_0041c174(param_2,param_3);
  *(char **)(param_1 + 0x2c) = "LocalMatchBrowseMatchmakeJob::BrowseMatchmake";
  *(undefined **)(param_1 + 0x24) = &UNK_00422ac8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}
