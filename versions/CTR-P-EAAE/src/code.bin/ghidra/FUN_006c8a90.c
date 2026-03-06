/**
 * FUN_006c8a90.c
 * Source line: 1026320
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006c8a90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x24,"G_inout",1);
    FUN_00568984(param_1 + 0x24,param_1 + 0x408,uVar2,0);
    iVar1 = FUN_0056878c(param_1 + 0x24,"N_All");
    *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xfe;
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x24);
  }
  FUN_00569544(param_1 + 0x408);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x24);
}
