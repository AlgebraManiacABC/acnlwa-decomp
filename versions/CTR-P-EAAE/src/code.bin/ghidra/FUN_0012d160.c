/**
 * FUN_0012d160.c
 * Source line: 133797
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0012d160(void)

{
  int iVar1;
  
  if (DAT_009514c8 != 0) {
    iVar1 = FUN_00100b8c(DAT_009514c8 + 8);
    FUN_002ffb64(iVar1 + -8);
    DAT_009514c8 = 0;
  }
  if (DAT_009535e4 != 0) {
    FUN_00135a8c();
    FUN_002ffb64();
    DAT_009535e4 = 0;
    (**(code **)(*piRam009535e8 + 0x10))();
    piRam009535e8 = NULL;
  }
  return;
}
