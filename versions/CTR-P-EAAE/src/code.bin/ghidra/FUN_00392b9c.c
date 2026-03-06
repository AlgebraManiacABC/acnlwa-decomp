/**
 * FUN_00392b9c.c
 * Source line: 500554
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_00392b9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  size_t sVar1;
  
  sVar1 = wcslen((wchar_t *)L"Encryption Error");
  if (sVar1 < param_4) {
    FUN_001017e4(param_3,L"Encryption Error");
  }
  return sVar1 < param_4;
}
