/**
 * FUN_00360f78.c
 * Source line: 465564
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00360f78(int param_1,wchar_t *param_2)

{
  size_t sVar1;
  
  while (param_2 == NULL) {
    param_2 = (wchar_t *)&UNK_0089a868;
  }
  sVar1 = wcslen(param_2);
  FUN_00360d24(param_1,sVar1 + 1);
  FUN_001017e4(*(undefined4 *)(param_1 + 0xc),param_2);
  *(size_t *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + sVar1 * 2;
  return param_1;
}
