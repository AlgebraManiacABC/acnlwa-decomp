/**
 * FUN_002b9adc.c
 * Source line: 356100
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002b9adc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0();
  if ((iVar1 != 0) && (iVar1 = FUN_0074fdd0(param_1 + 0x430), iVar1 != 0)) {
    uVar2 = FUN_004b4fc0(param_1 + 0x270,"G_name",1);
    FUN_00568984(param_1 + 0x270,param_1 + 0x408,uVar2,0);
    uVar2 = FUN_004b4fc0(param_1 + 0x270,"G_W_slct",1);
    FUN_00568984(param_1 + 0x270,param_1 + 0x430,uVar2,0);
    DAT_009532c4 = 0;
    FUN_00818c80(param_1,FUN_002ba148,0);
    return;
  }
  FUN_00569544(param_1 + 0x408);
  FUN_00569544(param_1 + 0x430);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x270);
}
