/**
 * FUN_0066a074.c
 * Source line: 975407
 * Body lines: 15
 */
#include "../../../include/types.h"

bool FUN_0066a074(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x984) != '\0';
  if (bVar1) {
    FUN_00216468();
    *(undefined1 *)(param_1 + 0x984) = 0;
    *(undefined2 *)(param_1 + 0x980) = 0xffff;
    *(undefined2 *)(param_1 + 0x982) = 0xffff;
    Item_Copy((Item_t *)(param_1 + 0x994),(Item_t *)&DAT_0095bfdc);
    *(undefined2 *)(param_1 + 0x5de) = 0xf;
    *(undefined1 *)(param_1 + 0x984) = 0;
    *(undefined4 *)(param_1 + 0x988) = _DAT_00ae5658;
    *(undefined4 *)(param_1 + 0x98c) = _DAT_00ae565c;
    *(undefined4 *)(param_1 + 0x990) = _DAT_00ae5660;
  }
  return bVar1;
}
