/**
 * FUN_001cb474.c
 * Source line: 233133
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_001cb474(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1a0) != 0) {
    iVar1 = FUN_0074fdd0(*(int *)(param_1 + 0x1a0));
    if (iVar1 == 0) {
      FUN_00569544(*(undefined4 *)(param_1 + 0x1a0));
          // WARNING: Subroutine does not return
      FUN_00568c10(param_1 + 4);
    }
    if (*(char *)(*(int *)(param_1 + 0x1a0) + 0x1c) != '\0') {
      FUN_00568984(param_1 + 4,*(int *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8),0);
    }
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  return 1;
}
