/**
 * FUN_001ab768.c
 * Source line: 215488
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001ab768(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_18 [12];
  
  if ((-1 < param_1[0x2d]) && (iVar1 = FUN_00745bd8(param_1 + 0x1e,auStack_18), iVar1 != 0)) {
    FUN_0052e3ec(auStack_18);
    FUN_002075d4(0x112,auStack_18,&DAT_00975bee,&DAT_00ae5664,1,0);
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if ((iVar1 != 0) && (iVar2 = FUN_00723e4c(), iVar2 != 0)) {
      FUN_0031d7f4(0,0x3f800000,iVar1,0x14b,0);
    }
  }
  return;
}
