/**
 * FUN_0046854c.c
 * Source line: 634190
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0046854c(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 local_10;
  
  if (cRam0097e072 != '\0') {
    if (200 < param_2) {
      return -0x1efeec17;
    }
    local_10 = uRam0097e07c;
    iVar1 = FUN_004694e8(&local_10,param_1,param_2);
    if (iVar1 != -0x36dfe7e6) {
      return iVar1;
    }
  }
  return -0x1f5eec08;
}
