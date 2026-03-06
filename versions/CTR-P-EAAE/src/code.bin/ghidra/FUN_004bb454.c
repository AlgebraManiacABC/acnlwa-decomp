/**
 * FUN_004bb454.c
 * Source line: 698244
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_004bb454(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  
  do {
    iVar1 = FUN_004b43d4(param_1,param_4);
    if (iVar1 == 0) {
      return 0;
    }
    sVar2 = wcslen(*(wchar_t **)(param_4 + 8));
  } while ((sVar2 <= param_3) ||
          (iVar1 = FUN_00101978(*(int *)(param_4 + 8) + sVar2 * 2 + param_3 * -2,param_2),
          iVar1 != 0));
  return 1;
}
