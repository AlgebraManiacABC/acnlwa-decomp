/**
 * FUN_00566730.c
 * Source line: 808573
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00566730(undefined4 *param_1)

{
  *param_1 = &UNK_00906058;
  if (param_1 == puRam00975c0c) {
    puRam00975c0c = NULL;
    FUN_00137e8c(iRam00975c08 + 0x30);
    iRam00975c08 = 0;
  }
  FUN_0013efb4(param_1);
  return;
}
