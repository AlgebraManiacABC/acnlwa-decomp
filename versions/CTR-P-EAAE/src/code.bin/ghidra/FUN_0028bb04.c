/**
 * FUN_0028bb04.c
 * Source line: 332233
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0028bb04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0();
  if ((iVar1 != 0) && (iVar1 = FUN_00766170(param_1 + 0x2090), iVar1 == 0)) {
    uVar2 = FUN_004b4fc0(param_1 + 0x294,"G_inout_00",1);
    FUN_00568984(param_1 + 0x294,param_1 + 0x52c,uVar2,0);
    FUN_00818210(param_1 + 0x28,FUN_0028c688,0);
    return;
  }
  FUN_00569544(param_1 + 0x52c);
  return;
}
