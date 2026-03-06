/**
 * FUN_001591e8.c
 * Source line: 171863
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_001591e8(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0x24) < param_2) ||
     (*(short *)(*(int *)(param_1 + 0x28) + param_2 * 2) == -1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
