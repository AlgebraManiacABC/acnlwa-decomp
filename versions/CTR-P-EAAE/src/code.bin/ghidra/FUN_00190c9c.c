/**
 * FUN_00190c9c.c
 * Source line: 205019
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00190c9c(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00148710(&local_20,*(int *)(param_1 + 0x6d8) + 0x80);
  iVar1 = *(int *)(param_1 + 0x904);
  *(undefined4 *)(iVar1 + 0x28) = local_20;
  *(undefined4 *)(iVar1 + 0x2c) = local_1c;
  *(undefined4 *)(iVar1 + 0x30) = local_18;
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xcf;
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x768);
}
