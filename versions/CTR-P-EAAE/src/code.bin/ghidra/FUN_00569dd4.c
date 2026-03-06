/**
 * FUN_00569dd4.c
 * Source line: 811346
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00569dd4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0011ea30(param_1,param_2,"2D_UI_Heap",4);
  *(ushort *)(iVar1 + 0x70) = *(ushort *)(iVar1 + 0x70) | 1;
  FUN_002fd108(8,iVar1,4);
  uRam00975c24 = FUN_00120840();
  FUN_0012ca6c(uRam00975c24,iVar1);
  FUN_002fd108(8,iVar1,4);
  uRam00975c28 = FUN_00120840();
  FUN_0012ca6c(uRam00975c28,iVar1);
  return;
}
