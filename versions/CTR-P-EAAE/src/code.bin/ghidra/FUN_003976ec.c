/**
 * FUN_003976ec.c
 * Source line: 503616
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_003976ec(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &UNK_008fc818;
  piVar2 = (int *)param_1[6];
  (**(code **)(*piVar2 + 8))(piVar2);
  FUN_0035ae18(param_1);
  (**(code **)(*piVar2 + 0xc))(piVar2);
  *param_1 = &UNK_008fb31c;
  FUN_0035ae18(param_1);
  iVar1 = FUN_007e35fc(param_1 + 1);
  return iVar1 + -4;
}
