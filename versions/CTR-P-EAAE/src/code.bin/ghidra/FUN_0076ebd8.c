/**
 * FUN_0076ebd8.c
 * Source line: 1131892
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0076ebd8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006158c4();
  if (*(char *)(iVar1 + *(char *)(param_1 + 0xc) * 0x14 + 0x19) == '\0') {
    uVar2 = 5;
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}
