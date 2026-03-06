/**
 * FUN_006237ec.c
 * Source line: 937148
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006237ec(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = DAT_0095362c;
  if (*param_1 == '\n') {
    *(char *)(DAT_0095362c + 0x3c) = param_1[1];
    local_18 = param_4;
    FUN_00621684(iVar1 + 0x1c0);
    local_18 = CONCAT22(local_18._2_2_,*(undefined2 *)(DAT_0095362c + 0x1326e));
    FUN_00624b24(&local_18,param_1[1]);
    *param_1 = '\v';
  }
  return;
}
