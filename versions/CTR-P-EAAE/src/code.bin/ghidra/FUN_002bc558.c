/**
 * FUN_002bc558.c
 * Source line: 357818
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_002bc558(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = *(char *)(param_1 + 0x13) == '\0';
  if (bVar2) {
    FUN_00606d70(param_1);
    uVar1 = FUN_00584134();
    FUN_0058c514(uVar1,0xb);
  }
  return bVar2;
}
