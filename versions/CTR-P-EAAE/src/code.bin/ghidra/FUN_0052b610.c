/**
 * FUN_0052b610.c
 * Source line: 770780
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0052b610(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3e0);
  if (iVar1 == 0) {
    FUN_00569544(param_1 + 0x3e0);
  }
  else {
    iVar1 = FUN_0056878c(param_1 + 0x24,"N_wipe_00");
    *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xfe;
    uVar2 = FUN_004b4fc0(param_1 + 0x24,"A00_Wipe",1);
    FUN_00568984(param_1 + 0x24,param_1 + 0x3e0,uVar2,0);
    FUN_0081adf0(param_1,&UNK_0052b4e0,0);
  }
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x24);
}
