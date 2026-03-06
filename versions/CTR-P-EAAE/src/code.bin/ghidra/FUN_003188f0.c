/**
 * FUN_003188f0.c
 * Source line: 419198
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined1 FUN_003188f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00305f2c();
  iVar1 = iRam009524dc;
  if (iVar2 != 3) {
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if ((*(byte *)(iVar1 + 0x1a) & 3) == 0) {
        return *(undefined1 *)(iVar1 + 0x1b);
      }
    }
  }
  return 0x26;
}
