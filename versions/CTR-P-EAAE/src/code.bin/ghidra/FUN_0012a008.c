/**
 * FUN_0012a008.c
 * Source line: 131304
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined ** FUN_0012a008(void)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = FUN_0012fb3c();
  if (iVar1 == 0) {
    ppuVar2 = &PTR_caseD_27_00202bf8;
  }
  else {
    FUN_00136474(iVar1);
    ppuVar2 = (undefined **)FUN_0012fee4();
    if ((-1 < (int)ppuVar2) && (iVar1 = FUN_0012a130(), iVar1 != 0)) {
      iVar1 = FUN_00136464();
      FUN_0012fe1c(iVar1 + 0x30,1);
    }
  }
  return ppuVar2;
}
