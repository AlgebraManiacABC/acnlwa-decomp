/**
 * FUN_00751824.c
 * Source line: 1107803
 * Body lines: 11
 */
#include "../../../include/types.h"

ushort FUN_00751824(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x5f0);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(iVar2 + 8);
  }
  if (iVar2 != 0 && 0x198 < uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}
