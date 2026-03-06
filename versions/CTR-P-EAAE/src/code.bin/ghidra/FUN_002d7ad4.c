/**
 * FUN_002d7ad4.c
 * Source line: 374717
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002d7ad4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xae8);
  iVar1 = *(int *)(iVar2 + 0x150);
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xfe;
          // WARNING: Subroutine does not return
  FUN_00568c10(iVar2 + 4);
}
