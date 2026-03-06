/**
 * FUN_002eede8.c
 * Source line: 385665
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002eede8(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x22d4) == '\x01') {
    FUN_0031d00c(param_1 + 0x1b04);
    iVar1 = FUN_00723cd0(param_1 + 0x1b04);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x22d4) = 0;
    }
  }
  iVar1 = FUN_0074fdd0(param_1 + *(int *)(param_1 + 0x22e8) * 0x28 + 0x740);
  if (iVar1 != 0) {
    FUN_002fae84();
    return;
  }
  FUN_00569544(param_1 + *(int *)(param_1 + 0x22e8) * 0x28 + 0x740);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x2e4);
}
