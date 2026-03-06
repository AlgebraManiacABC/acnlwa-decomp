/**
 * FUN_0016c428.c
 * Source line: 184230
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0016c428(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006d1e64();
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = FUN_005c2b00(), uVar2 = 0, iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x1a) = 5;
    uVar2 = 1;
  }
  return uVar2;
}
