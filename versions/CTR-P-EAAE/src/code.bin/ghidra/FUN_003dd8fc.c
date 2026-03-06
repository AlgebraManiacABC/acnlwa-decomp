/**
 * FUN_003dd8fc.c
 * Source line: 553083
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_003dd8fc(int *param_1,int *param_2,int *param_3)

{
  int local_20;
  int local_1c;
  int local_18 [2];
  
  FUN_003dc274(&local_1c,param_1);
  if (local_1c != 0) {
    FUN_007e3ec0(local_18,*param_3 + 8);
    if (local_18[0] != 0) {
      local_20 = local_1c;
      FUN_007e3df8(local_18[0] + 8,&local_20,*(undefined1 *)(*param_1 + 10));
      *param_2 = local_1c;
      *param_1 = *(int *)(*param_1 + 4);
      return 0;
    }
  }
  return 2;
}
