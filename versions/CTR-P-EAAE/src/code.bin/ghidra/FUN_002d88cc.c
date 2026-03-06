/**
 * FUN_002d88cc.c
 * Source line: 374979
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002d88cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0074fdd0();
  iVar3 = param_1 + 0x908;
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(iVar3,"G_inoutL_00",1);
    FUN_00568984(iVar3,param_1 + 0xa54,uVar2,0);
    FUN_008191bc(param_1 + 0xa4,&UNK_002d73ac,0);
    return;
  }
  FUN_00569544(param_1 + 0xa54);
          // WARNING: Subroutine does not return
  FUN_00568c10(iVar3);
}
