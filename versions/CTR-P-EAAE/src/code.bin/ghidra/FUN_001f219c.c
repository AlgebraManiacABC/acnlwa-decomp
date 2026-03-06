/**
 * FUN_001f219c.c
 * Source line: 255266
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001f219c(int param_1)

{
  float fVar1;
  float local_18;
  float local_14;
  float local_10;
  
  *(undefined1 *)(param_1 + 0x2521) = 0;
  if (_DAT_0094dfbc != 0) {
    local_18 = *(float *)(_DAT_0094dfbc + 0x14) + _DAT_00ac2be4;
    local_14 = *(float *)(_DAT_0094dfbc + 0x18) + fRam00ac2be8;
    local_10 = *(float *)(_DAT_0094dfbc + 0x1c) + fRam00ac2bec;
    fVar1 = (float)FUN_0074fe34(&local_18,param_1 + 0x14);
    if ((int)SQRT(fVar1) < 0x3f800000) {
      FUN_003041d8(param_1,0xe);
    }
  }
  return;
}
