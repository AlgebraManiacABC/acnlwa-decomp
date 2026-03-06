/**
 * FUN_002bc4b8.c
 * Source line: 357776
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_002bc4b8(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = *(char *)(param_1 + 0x13) != '\0';
  if (bVar2) {
    FUN_00606d20(param_1);
    uVar1 = FUN_00584134();
    FUN_0058c5f0(uVar1,0xb);
    FUN_005837d4();
  }
  return bVar2;
}
