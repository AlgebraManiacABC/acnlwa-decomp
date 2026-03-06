/**
 * FUN_0055ccd8.c
 * Source line: 802740
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0055ccd8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 3 || iVar1 == 4) {
    return param_1;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x7c) = 2;
  }
  if (param_2 != 0) {
    FUN_007d25c8(param_1 + 0x20);
    return 1;
  }
  FUN_00142364(param_1 + 0x20,*(undefined4 *)(param_1 + 0x74));
  return 1;
}
