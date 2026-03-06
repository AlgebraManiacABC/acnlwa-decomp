/**
 * FUN_0076f030.c
 * Source line: 1132204
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0076f030(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(undefined **)(param_1 + 0xc) == &UNK_006cd6d4) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((*(undefined **)(param_1 + 0xc) == &UNK_006cd60c) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 | uVar2;
}
