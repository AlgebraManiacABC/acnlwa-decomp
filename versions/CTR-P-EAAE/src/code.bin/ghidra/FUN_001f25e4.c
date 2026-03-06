/**
 * FUN_001f25e4.c
 * Source line: 255336
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001f25e4(int param_1)

{
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  
  if (_DAT_0094dfbc != 0) {
    local_14 = *(undefined4 *)(_DAT_0094dfbc + 0x14);
    local_c = *(undefined4 *)(_DAT_0094dfbc + 0x1c);
    local_10 = *(float *)(_DAT_0094dfbc + 0x18) + 40.0;
    FUN_001ccee0(param_1 + 0x5d0,1,&local_14,0xc,0xc);
  }
  if (*(char *)(param_1 + 0x554) != '\0') {
    FUN_003041d8(param_1,0x14);
  }
  return;
}
