/**
 * FUN_0075f578.c
 * Source line: 1119712
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0075f578(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00746e74(&DAT_00a22020);
  if (*piVar1 != -3 || piVar1[1] != -1) {
    uVar2 = FUN_0075f3cc(param_1,piVar1);
    return uVar2;
  }
  return 4;
}
