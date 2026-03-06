/**
 * FUN_0031e810.c
 * Source line: 422888
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0031e810(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x4ec) == '\x01') {
    iVar1 = FUN_0056878c(param_1 + 0x270,"N_all");
    *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xfe;
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x270);
  }
  return;
}
