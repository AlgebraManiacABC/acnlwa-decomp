/**
 * FUN_00730bec.c
 * Source line: 1087364
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00730bec(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((short)param_1[1] != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}
