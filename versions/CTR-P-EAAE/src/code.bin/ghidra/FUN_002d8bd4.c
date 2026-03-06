/**
 * FUN_002d8bd4.c
 * Source line: 375093
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002d8bd4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0074fdd0();
  iVar3 = param_1 + 0x908;
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(iVar3,"G_inoutR_00",1);
    FUN_00568984(iVar3,param_1 + 0xa7c,uVar2,0);
    *(byte *)(*(int *)(param_1 + 0xacc) + 0xb7) = *(byte *)(*(int *)(param_1 + 0xacc) + 0xb7) & 0xfe
    ;
    FUN_008191bc(param_1 + 0xa4,&UNK_002d73ac,0);
    return;
  }
  FUN_00569544(param_1 + 0xa7c);
          // WARNING: Subroutine does not return
  FUN_00568c10(iVar3);
}
