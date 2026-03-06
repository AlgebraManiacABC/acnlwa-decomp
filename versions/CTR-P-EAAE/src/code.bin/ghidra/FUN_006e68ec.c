/**
 * FUN_006e68ec.c
 * Source line: 1043781
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006e68ec(int param_1)

{
  if ((*(undefined **)(param_1 + 0xc) == &UNK_006e59a4) && (*(int *)(param_1 + 0x10) == 0)) {
    if (*(char *)(param_1 + 0xaf1) == '\0') {
      FUN_0081bc80(param_1,&UNK_006e5c60,0);
      return;
    }
    FUN_0081bc80(param_1,&UNK_006e5bf4,0);
  }
  return;
}
