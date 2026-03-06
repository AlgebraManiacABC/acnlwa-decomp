/**
 * FUN_0079fd80.c
 * Source line: 1142949
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0079fd80(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_1 < 0x20) &&
     (puVar1 = *(undefined4 **)(iRam0097d7ac + param_1 * 4 + 0x828), puVar1 != NULL)) {
    uVar2 = *puVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
