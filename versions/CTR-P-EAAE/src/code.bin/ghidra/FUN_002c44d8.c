/**
 * FUN_002c44d8.c
 * Source line: 363944
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_002c44d8(void)

{
  uint uVar1;
  int iVar2;
  
  if (iRam0094d770 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (cRam0094d76c == '\0') {
      iVar2 = FUN_006165c4(uRam0094d774);
      return (uint)**(byte **)(*(int *)(iVar2 + 4) + (uint)*(byte *)(iRam0094d770 + 0xe1) * 4);
    }
    iVar2 = FUN_007017a8();
    uVar1 = (uint)**(byte **)(*(int *)(iVar2 + 4) + (uint)*(byte *)(iRam0094d770 + 0xe1) * 4);
  }
  return uVar1;
}
