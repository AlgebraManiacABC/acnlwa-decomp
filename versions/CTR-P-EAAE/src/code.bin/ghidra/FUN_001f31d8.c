/**
 * FUN_001f31d8.c
 * Source line: 255582
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001f31d8(int param_1)

{
  int iVar1;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  
  if (_DAT_0094dfbc != 0) {
    local_14 = *(undefined4 *)(_DAT_0094dfbc + 0x14);
    local_c = *(undefined4 *)(_DAT_0094dfbc + 0x1c);
    local_10 = *(float *)(_DAT_0094dfbc + 0x18) + 40.0;
    FUN_001ccee0(param_1 + 0x5d0,1,&local_14,0xc,0xc);
  }
  iVar1 = *(int *)(param_1 + 0x2528);
  if ((iVar1 == 0) || (iVar1 += -1, *(int *)(param_1 + 0x2528) = iVar1, iVar1 == 0)) {
    FUN_003041d8(param_1,0x15);
  }
  return;
}
