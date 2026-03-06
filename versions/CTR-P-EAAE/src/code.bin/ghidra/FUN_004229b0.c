/**
 * FUN_004229b0.c
 * Source line: 587840
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_004229b0(int *param_1,int param_2)

{
  param_1[0x10] = param_2;
  (**(code **)(*param_1 + 8))(param_1,0);
  param_1[9] = (int)&UNK_004228a8;
  param_1[10] = 0;
  param_1[0xb] = (int)"LocalEventCheckBackgroundJob::WatchUpdateEvent";
  return 0;
}
