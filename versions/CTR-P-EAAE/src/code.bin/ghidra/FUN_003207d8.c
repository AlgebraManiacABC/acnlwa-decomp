/**
 * FUN_003207d8.c
 * Source line: 423856
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_003207d8(int param_1,byte param_2)

{
  *(byte *)(*(int *)(param_1 + 0x150) + 0xb7) =
       param_2 | *(byte *)(*(int *)(param_1 + 0x150) + 0xb7) & 0xfe;
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x130);
}
