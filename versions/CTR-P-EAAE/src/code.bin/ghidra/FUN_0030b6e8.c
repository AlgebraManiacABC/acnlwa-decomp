/**
 * FUN_0030b6e8.c
 * Source line: 409590
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0030b6e8(int param_1)

{
  *(undefined1 *)(param_1 + 0x35b4) = 0;
  FUN_0030a8f8(param_1);
  FUN_00305784(param_1,1);
  *(byte *)(*(int *)(param_1 + 0x2754) + 0xb7) = *(byte *)(*(int *)(param_1 + 0x2754) + 0xb7) & 0xfe
  ;
  *(byte *)(*(int *)(param_1 + 0x2750) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0x2750) + 0xb7) & 0xfe | 1;
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x4d0);
}
