/**
 * FUN_00116630.c
 * Source line: 115632
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00116630(undefined4 param_1,int param_2,int *param_3)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_00315b50(param_1,param_3,&local_20);
  if (0xe < (uint)(local_20 + local_1c + local_18 + local_14)) {
    FUN_00315924(param_1,param_3);
  }
  *(ushort *)(param_2 + *param_3 * 2) =
       *(ushort *)(param_2 + *param_3 * 2) & ~*(ushort *)(param_3 + 4);
  *(int *)(param_2 + 0x280) = *(int *)(param_2 + 0x280) + -1;
  return;
}
