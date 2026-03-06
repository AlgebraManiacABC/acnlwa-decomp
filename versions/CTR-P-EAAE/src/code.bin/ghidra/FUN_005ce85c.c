/**
 * FUN_005ce85c.c
 * Source line: 880766
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005ce85c(int param_1)

{
  int iVar1;
  
  if (iRam009514bc != 0) {
    FUN_001fa338();
    *(code **)(param_1 + 0x14) = FUN_005ce70c;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0xfad) = 1;
    iVar1 = FUN_0024ebc0();
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x168) = 1;
    }
    *(undefined1 *)(param_1 + 0xfae) = 1;
    *(undefined1 *)(param_1 + 0xfaf) = 0;
  }
  return;
}
