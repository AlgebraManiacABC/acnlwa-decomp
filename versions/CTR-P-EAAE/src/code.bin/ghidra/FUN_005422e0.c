/**
 * FUN_005422e0.c
 * Source line: 785985
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005422e0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00904448;
  iVar1 = _DAT_009752e0;
  if (param_1 == puRam009752e4) {
    puRam009752e4 = NULL;
    if (*(int **)(_DAT_009752e0 + 0x20) != NULL) {
      (**(code **)(**(int **)(_DAT_009752e0 + 0x20) + 4))();
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    FUN_00135520(&UNK_008a3b74);
    FUN_002f88b8(*(undefined4 *)(iVar1 + 0x24));
    _DAT_009752e0 = 0;
  }
  FUN_0013efb4(param_1);
  return;
}
