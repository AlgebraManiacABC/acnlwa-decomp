/**
 * FUN_006d7ddc.c
 * Source line: 1035272
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006d7ddc(int param_1)

{
  int iVar1;
  
  if ((DAT_0094fd58 & 8) != 0) {
    if (*(char *)(param_1 + 0x1911) == '\0') {
      FUN_0058d3b4(0,*(undefined4 *)(*(char *)(param_1 + 0x191b) * 4 + 0x950060));
      *(undefined1 *)(param_1 + 0x1911) = 1;
    }
    if (((DAT_0094fd58 & 0x10) != 0) && (iVar1 = FUN_006d6830(param_1), iVar1 != 0)) {
      *(uint *)(param_1 + 0x6ec) = *(uint *)(param_1 + 0x6ec) & 0xfffffff7;
      FUN_0081bb74(param_1 + 0x14,FUN_006d61f4,0);
    }
  }
  return;
}
