/**
 * FUN_00697f00.c
 * Source line: 999978
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00697f00(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0xf126);
  if (((int)((uint)*pbVar1 << 0x19) < 0) && (*(int *)(param_1 + 0xea08) != 0)) {
    FUN_002f73b8(param_1 + 0xe8fc);
    FUN_00317a00(pbVar1,6,0);
    FUN_00317a00(pbVar1,7,0);
  }
  return;
}
