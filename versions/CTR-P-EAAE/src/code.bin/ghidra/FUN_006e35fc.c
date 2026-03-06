/**
 * FUN_006e35fc.c
 * Source line: 1041501
 * Body lines: 15
 */
#include "../../../include/types.h"

void * FUN_006e35fc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  void *pvVar2;
  uint local_10;
  
  if ((*(int *)(param_1 + 0x2760) == 0) &&
     (((*(uint *)(param_1 + 0x2764) & 1) == 0 || (*(uint *)(param_1 + 0x2764) == 0)))) {
    local_10 = param_4;
    FUN_0050c9a4(param_1 + 0x10);
    FUN_004dcf6c(param_1 + 0x10);
    FUN_0035072c(&local_10);
    iVar1 = FUN_006d3cd4(local_10 >> 0x18);
    *(ushort *)(param_1 + 0x36) = (ushort)((uint)(iVar1 << 0x1c) >> 0x14) | 0x8002;
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return NULL;
}
