/**
 * FUN_00766170.c
 * Source line: 1124471
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_00766170(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(undefined **)(param_1 + 0xc) == &UNK_006a38b0) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((*(undefined **)(param_1 + 0xc) == &UNK_006a31b8) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 | uVar2;
}
