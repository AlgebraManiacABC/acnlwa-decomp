/**
 * FUN_00184fbc.c
 * Source line: 199730
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00184fbc(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = DAT_0095362c;
  if (*param_2 != '\0') {
    FUN_0061a684(DAT_0095362c + 0x1e4,param_1,5);
    FUN_00624aa4(iVar1 + 0x1ea,param_1);
    *(undefined1 *)(DAT_0095362c + 0x132b0) = 1;
    return;
  }
  FUN_0061a684(DAT_0095362c + 0x1e4,param_1,0);
  FUN_00624aa4(iVar1 + 0x1ea,param_1);
  return;
}
