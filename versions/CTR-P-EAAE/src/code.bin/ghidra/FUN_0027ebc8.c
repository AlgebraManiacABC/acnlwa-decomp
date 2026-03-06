/**
 * FUN_0027ebc8.c
 * Source line: 326326
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0027ebc8(int param_1)

{
  code *pcVar1;
  
  FUN_005783f4();
  if (*(int *)(param_1 + 0x3994) == 0) {
    *(int *)(param_1 + 0x3994) = 1;
    pcVar1 = pcRam0094dc94;
    if ((uRam0094dc98 & 1) != 0) {
      pcVar1 = *(code **)(pcRam0094dc94 + *(int *)(param_1 + ((int)uRam0094dc98 >> 1)));
    }
    (*pcVar1)();
  }
  *(undefined1 *)(param_1 + 0x251d) = 0;
  return;
}
