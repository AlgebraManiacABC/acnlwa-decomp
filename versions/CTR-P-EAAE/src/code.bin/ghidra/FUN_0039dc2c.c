/**
 * FUN_0039dc2c.c
 * Source line: 506614
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0039dc2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_10 = param_4;
    iVar1 = nn::svc::GetThreadId(&local_10,0xffff8000);
    if (iVar1 < 0) {
      FUN_0012f204();
    }
    *(undefined4 *)(param_1 + 8) = local_10;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}
