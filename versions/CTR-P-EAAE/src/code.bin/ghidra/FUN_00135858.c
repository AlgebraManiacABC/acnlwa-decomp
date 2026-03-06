/**
 * FUN_00135858.c
 * Source line: 142122
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00135858(int *param_1)

{
  bool bVar1;
  
  do {
    if (*param_1 != 1) {
      ClearExclusiveLocal();
      return 0;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = -1;
  return 1;
}
