/**
 * FUN_0075e010.c
 * Source line: 1118340
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_0075e010(int param_1,uint param_2)

{
  byte bVar1;
  
  if (*(byte *)(param_1 + 0x3c) != param_2) {
    bVar1 = FUN_00624c78(param_2);
    return (bVar1 & *(byte *)(param_1 + 0x1326e)) != 0;
  }
  return false;
}
