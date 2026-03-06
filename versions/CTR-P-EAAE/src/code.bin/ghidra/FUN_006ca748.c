/**
 * FUN_006ca748.c
 * Source line: 1027381
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined1 * FUN_006ca748(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_278 [624];
  
  if ((1 < *(byte *)(param_1 + 0x69) - 6) && (iVar1 = FUN_0070bd30(), iVar1 != 0)) {
    puVar2 = (undefined1 *)FUN_006ca8c8(param_1,0x870,4);
    return puVar2;
  }
  FUN_0022e168(auStack_278,param_1);
  FUN_006ca8c8(auStack_278,0x26c,1);
  return auStack_278;
}
