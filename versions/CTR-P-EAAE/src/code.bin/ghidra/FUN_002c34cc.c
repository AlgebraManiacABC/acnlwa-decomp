/**
 * FUN_002c34cc.c
 * Source line: 363322
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002c34cc(int param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (*(char *)(param_1 + 0x19d) == '\0') {
    *(undefined1 *)(param_1 + 0x19d) = 1;
    FUN_002e8cc8(param_1 + 0x120,0x100060e);
    uStack_14 = FUN_006c81f8(param_1 + 0x14,0);
    uStack_10 = *(undefined4 *)(param_1 + 0x1c);
    local_18 = *(undefined4 *)(param_1 + 0x14);
    FUN_002075d4(0x183,&local_18,&DAT_00975bee,&DAT_00ae5664,1,0);
  }
  return;
}
