/**
 * FUN_005f72f0.c
 * Source line: 908328
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005f72f0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_0090982c;
  if (param_1 == puRam0095deb8) {
    puRam0095deb8 = NULL;
    iVar1 = FUN_0013bc00(_DAT_0095deb4 + 0x24);
    FUN_0013bb80(iVar1 + -0x10);
    _DAT_0095deb4 = 0;
  }
  FUN_0013efb4(param_1);
  return;
}
