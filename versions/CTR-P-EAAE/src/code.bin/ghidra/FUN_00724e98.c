/**
 * FUN_00724e98.c
 * Source line: 1079297
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00724e98(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((((*param_1 == *param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) &&
       (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
      ((param_1[0x11] == param_2[0x11] && (param_1[0x12] == param_2[0x12])))) &&
     ((param_1[0x13] == param_2[0x13] &&
      (((param_1[0x10] != '\0') == (param_2[0x10] != '\0') &&
       (iVar1 = FUN_0076aa04(param_1 + 0xc,param_2 + 0xc), iVar1 != 0)))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
