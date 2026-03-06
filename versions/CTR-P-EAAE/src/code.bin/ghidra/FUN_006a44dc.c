/**
 * FUN_006a44dc.c
 * Source line: 1002605
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006a44dc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_0090af60;
  if (param_1 == puRam00951690) {
    puRam00951690 = NULL;
    iVar1 = FUN_0013bb80(iRam0095168c + 0xe10);
    FUN_0013bb80(iVar1 + -0x10);
    iRam0095168c = 0;
  }
  FUN_0013efb4(param_1);
  return;
}
