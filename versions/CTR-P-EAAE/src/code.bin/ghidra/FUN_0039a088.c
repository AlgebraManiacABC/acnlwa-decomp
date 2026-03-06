/**
 * FUN_0039a088.c
 * Source line: 504466
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0039a088(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &UNK_008fcdc8;
  iVar1 = FUN_003d743c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  param_1[0x10] = 0;
  (**(code **)(*piVar2 + 0xc))(piVar2);
  FUN_0037de88(param_1);
  return;
}
