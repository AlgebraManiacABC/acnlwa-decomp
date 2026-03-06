/**
 * FUN_0052a248.c
 * Source line: 770084
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0052a248(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x480) == 0) {
    FUN_0052b948(uRam0095e0b4);
  }
  else {
    FUN_0052b948(uRam0095e0b8);
  }
  iVar1 = FUN_0056878c(param_1 + 0x24,"N_fade_00");
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xfe | 1;
  uVar2 = FUN_004b4fc0(param_1 + 0x24,"A00_Fade",1);
  FUN_00568630(param_1 + 0x24,param_1 + 0x430,uVar2,0);
  FUN_005697e0(0,param_1 + 0x430);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x24);
}
