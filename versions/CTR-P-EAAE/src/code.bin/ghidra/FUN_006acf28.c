/**
 * FUN_006acf28.c
 * Source line: 1007857
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006acf28(int param_1)

{
  *(byte *)(*(int *)(param_1 + 0x6340) + 0xb7) =
       *(char *)(param_1 + 0x6358) == '\0' | *(byte *)(*(int *)(param_1 + 0x6340) + 0xb7) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x6348) + 0xb7) =
       *(byte *)(param_1 + 0x6358) | *(byte *)(*(int *)(param_1 + 0x6348) + 0xb7) & 0xfe;
  if (*(char *)(param_1 + 0x6358) != '\0') {
    return;
  }
  *(byte *)(*(int *)(param_1 + 0x1808) + 0xb7) = *(byte *)(*(int *)(param_1 + 0x1808) + 0xb7) & 0xfe
  ;
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x16bc);
}
