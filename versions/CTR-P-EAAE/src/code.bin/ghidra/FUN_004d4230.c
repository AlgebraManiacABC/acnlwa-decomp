/**
 * FUN_004d4230.c
 * Source line: 717078
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_004d4230(int param_1,int param_2,uint *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + param_2);
  if (*pcVar1 == -2) {
    param_2 += 3;
    *param_3 = CONCAT11(pcVar1[1],pcVar1[2]) | 1;
  }
  else {
    *param_3 = 1;
  }
  return param_2;
}
