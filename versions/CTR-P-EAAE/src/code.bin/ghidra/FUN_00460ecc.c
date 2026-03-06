/**
 * FUN_00460ecc.c
 * Source line: 628469
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_00460ecc(int param_1,int param_2,int param_3)

{
  bool bVar1;
  
  param_1 += param_2 * 2;
  bVar1 = *(char *)(param_1 + param_3) == '\0';
  if (bVar1) {
    *(undefined1 *)(param_1 + param_3) = 1;
  }
  return bVar1;
}
