/**
 * FUN_002b64f8.c
 * Source line: 353979
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_002b64f8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  
  iVar1 = FUN_00755ac4(0x950814);
  if (iVar1 != 0) {
    uVar2 = FUN_005b1a08(auStack_18,0x950814);
    for (iVar1 = iRam009981f4; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      iVar3 = FUN_00755ad4(uVar2,iVar1 + 0xc);
      if (iVar3 != 0) {
        return iVar1 + 0x14;
      }
    }
  }
  return 0;
}
