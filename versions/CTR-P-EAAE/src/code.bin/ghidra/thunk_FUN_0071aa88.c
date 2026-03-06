/**
 * thunk_FUN_0071aa88.c
 * Source line: 403636
 * Body lines: 1
 */
#include "../../../include/types.h"

bool thunk_FUN_0071aa88(int param_1,uint param_2)

{
  return ((uint)*(byte *)(param_1 + 4) & 1 << (param_2 & 0xff)) != 0;
}
