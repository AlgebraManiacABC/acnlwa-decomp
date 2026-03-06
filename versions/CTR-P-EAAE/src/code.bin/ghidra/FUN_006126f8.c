/**
 * FUN_006126f8.c
 * Source line: 926151
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006126f8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005b3ec4();
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xd84) == param_1) {
      return *(undefined4 *)(iVar1 + 0xd60);
    }
    if (param_1 != 0xffff) {
      *(int *)(iVar1 + 0xd7c) = param_1;
    }
  }
  return 0;
}
