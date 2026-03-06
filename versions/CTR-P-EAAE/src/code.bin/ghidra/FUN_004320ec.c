/**
 * FUN_004320ec.c
 * Source line: 597997
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_004320ec(int *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  
  if ((((*(byte *)(param_1 + 0x16) != 0) && (*(byte *)(param_1 + 0x16) == param_2)) &&
      (*param_3 == param_1[0x17])) && (param_3[1] == param_1[0x18])) {
    uVar1 = (**(code **)(*param_1 + 0x44))();
    if ((uVar1 & 0x80000000) == 0) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xe0a14827;
}
