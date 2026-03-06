/**
 * FUN_001c0268.c
 * Source line: 227418
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001c0268(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 4) == 0x1000000) {
    GET_DAT_0095bf74();
    return;
  }
  if (*(int *)(param_2 + 4) == 0x1000001) {
    FUN_002fae84();
    return;
  }
  return;
}
