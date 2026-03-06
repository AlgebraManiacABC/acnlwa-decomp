/**
 * FUN_00292c80.c
 * Source line: 336086
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00292c80(uint param_1)

{
  bool bVar1;
  
  if (-1 < *(char *)(param_1 + 0x224)) {
    return param_1;
  }
  FUN_00813b30(param_1 + 0x224,7,0);
  bVar1 = DAT_00950712 != '\0';
  if (bVar1) {
    DAT_00950712 = '\0';
  }
  return (uint)bVar1;
}
