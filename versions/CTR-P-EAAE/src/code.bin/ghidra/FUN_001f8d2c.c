/**
 * FUN_001f8d2c.c
 * Source line: 258382
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_001f8d2c(int param_1)

{
  int iVar1;
  undefined *local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x1fc) == '\0') {
    local_c = *(undefined4 *)(param_1 + 0x1ec);
    local_10 = &DAT_009047f8;
    iVar1 = FUN_00317a50(param_1 + 0x1c,&local_10,*(undefined4 *)(param_1 + 0x18),0x80);
    if (iVar1 != 1) {
      return 3;
    }
    *(undefined1 *)(param_1 + 0x1fc) = 1;
  }
  return 2;
}
