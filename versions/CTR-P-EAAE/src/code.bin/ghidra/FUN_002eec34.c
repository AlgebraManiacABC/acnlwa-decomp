/**
 * FUN_002eec34.c
 * Source line: 385629
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002eec34(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0056878c(param_1 + 0x2e4,uRam0094f760);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xcf;
  iVar1 = FUN_0056878c(param_1 + 0x2e4,uRam0094f764);
  *(undefined4 *)(iVar1 + 0x28) = 0x43af0000;
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xcf;
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x2e4);
}
