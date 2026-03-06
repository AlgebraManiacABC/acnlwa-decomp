/**
 * FUN_002887ec.c
 * Source line: 330849
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002887ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    DAT_0094fd58 &= 0xffffffef;
    uVar2 = FUN_004b4fc0(param_1 + 0x294,"G_inout",1);
    FUN_00568984(param_1 + 0x294,param_1 + 0x408,uVar2,0);
    FUN_005204b0(param_1);
    FUN_00818104(param_1 + 0x28,&UNK_00288348,0);
    return;
  }
  FUN_00569544(param_1 + 0x408);
  *(undefined1 *)(param_1 + 0x3b6) = 1;
  return;
}
