/**
 * FUN_002e44b4.c
 * Source line: 379953
 * Body lines: 13
 */
#include "../../../include/types.h"

bool FUN_002e44b4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00746f8c(&DAT_00a22020);
  if (iVar1 == 0) {
    iVar1 = FUN_0050d0c4(&DAT_00a22020,param_1 + 0x3c,*(undefined4 *)(param_1 + 0x48),param_1 + 0x4c
                         ,1,0x80);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x56) = 0;
    }
    return iVar1 != 0;
  }
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x54) = 4;
  return true;
}
