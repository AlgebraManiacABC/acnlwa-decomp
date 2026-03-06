/**
 * FUN_006220f8.c
 * Source line: 936144
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006220f8(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = FUN_00624990(param_1 + 1);
  iVar1 = FUN_00625c7c(iVar1 + 5);
  iVar1 = FUN_00625b90(iVar1 + 8);
  iVar1 = FUN_00624c90(iVar1 + 6);
  *(undefined **)(iVar1 + -4) = &UNK_0090ac18;
  iVar1 = FUN_00624c90(iVar1 + 8);
  *(undefined **)(iVar1 + -4) = &UNK_0090ac18;
  *(undefined1 *)(iVar1 + 4) = 4;
  iVar1 = FUN_00624c90(iVar1 + 5);
  *(undefined1 *)(iVar1 + 2) = 0;
  return;
}
