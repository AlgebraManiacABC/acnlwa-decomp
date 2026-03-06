/**
 * FUN_005fd374.c
 * Source line: 914417
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005fd374(undefined4 *param_1)

{
  undefined *local_c;
  
  if (*(char *)((int)param_1 + 5) != '\0') {
    local_c = &UNK_00890e48;
    FUN_0060177c(*param_1,&local_c,0x95df14);
  }
  if (*(short *)((int)param_1 + 6) != 7) {
    local_c = &UNK_00890eb0;
    FUN_0060177c(*param_1,&local_c,0x95df14);
  }
  return;
}
