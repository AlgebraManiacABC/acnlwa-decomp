/**
 * FUN_003111a4.c
 * Source line: 414541
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_003111a4(int param_1)

{
  *(undefined1 *)(param_1 + 0x35b4) = 1;
  FUN_00305784(param_1);
  *(byte *)(*(int *)(param_1 + 0x2754) + 0xb7) = *(byte *)(*(int *)(param_1 + 0x2754) + 0xb7) & 0xfe
  ;
  *(byte *)(*(int *)(param_1 + 0x2750) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0x2750) + 0xb7) & 0xfe | 1;
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x4d0);
}
