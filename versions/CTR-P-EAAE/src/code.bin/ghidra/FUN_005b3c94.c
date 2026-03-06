/**
 * FUN_005b3c94.c
 * Source line: 864145
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_005b3c94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_00953ef0;
  *(undefined4 *)(_DAT_00953ef0 + 0x150) = 0;
  *(undefined4 *)(iVar1 + 0x154) = 0;
  FUN_0022bba4(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x408) = 0;
  uVar2 = FUN_00584134();
  FUN_0058c5f0(uVar2,10);
  return 2;
}
