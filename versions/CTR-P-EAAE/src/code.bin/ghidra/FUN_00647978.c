/**
 * FUN_00647978.c
 * Source line: 958161
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00647978(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_0064c130();
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (iVar2 = FUN_0063cd2c(param_1,&local_18,&local_14,0), iVar2 != 0)) {
    uRam0094d950 = FUN_0075ce98(iVar1,local_18);
    uRam0094d954 = FUN_0075ce98(iVar1,local_14);
    *(undefined **)(param_1 + 0x160) = &UNK_0016c2a8;
  }
  return;
}
