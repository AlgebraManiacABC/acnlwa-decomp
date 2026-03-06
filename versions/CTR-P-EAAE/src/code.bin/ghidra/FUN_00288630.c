/**
 * FUN_00288630.c
 * Source line: 330784
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00288630(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3e0);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x294,"G_inout",1);
    FUN_00568984(param_1 + 0x294,param_1 + 0x3e0,uVar2,0);
    FUN_00818104(param_1 + 0x28,FUN_002885b8,0);
    return;
  }
  FUN_00569544(param_1 + 0x3e0);
  *(undefined1 *)(param_1 + 0x3b6) = 1;
  return;
}
