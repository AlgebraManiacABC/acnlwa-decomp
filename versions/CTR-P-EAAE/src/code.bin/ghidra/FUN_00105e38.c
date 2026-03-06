/**
 * FUN_00105e38.c
 * Source line: 107434
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00105e38(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if ((((param_3[2] == 0x10) || (param_3[2] == 0x5f)) || (param_3[3] == 0x10)) ||
     (param_3[3] == 0x4f)) {
    *(ushort *)(param_2 + *param_3 * 2) =
         *(ushort *)(param_2 + *param_3 * 2) & ~*(ushort *)(param_3 + 4);
  }
  else {
    iVar1 = FUN_002ff0e0(&UNK_001061e5,param_1);
    if ((iVar1 != 0) || (iVar1 = FUN_002ff160(param_3[2],param_3[3],DAT_00952b9d), iVar1 != 2)) {
      *(ushort *)(param_2 + *param_3 * 2) =
           *(ushort *)(param_2 + *param_3 * 2) & ~*(ushort *)(param_3 + 4);
      return;
    }
  }
  return;
}
