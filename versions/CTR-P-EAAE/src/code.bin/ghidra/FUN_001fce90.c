/**
 * FUN_001fce90.c
 * Source line: 259899
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001fce90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0071ee8c();
  iVar2 = param_1 + 0x43e0;
  if ((iVar1 == 0) && (iVar1 = FUN_0074fdd0(iVar2), iVar1 != 0)) {
    FUN_00569420(param_1 + 0x3e0,iVar2);
    *(uint *)(param_1 + 0x497c) = *(uint *)(param_1 + 0x497c) & 0xfffffff7;
    FUN_00816e38(param_1 + 0x28,FUN_001fcda0,0);
    return;
  }
  FUN_00569544(iVar2);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x3e0);
}
