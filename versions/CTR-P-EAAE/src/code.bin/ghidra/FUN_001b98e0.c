/**
 * FUN_001b98e0.c
 * Source line: 223819
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_001b98e0(int *param_1,uint param_2)

{
  int iVar1;
  
  if (((param_1 != NULL) && ((**(code **)(*param_1 + 0x1c))(param_1), param_2 < 0xba)) &&
     ((char)(&UNK_00857da4)[param_2] != -1)) {
    iVar1 = (char)(&UNK_00857da4)[param_2] * 0x18;
    FUN_00312a4c(DAT_0095debc,param_1,*(char **)((uint)(byte)(&UNK_00857e66)[iVar1] * 4 + 0x951678),
                 *(undefined4 *)(&UNK_00857e60 + iVar1));
    return 1;
  }
  return 0;
}
