/**
 * FUN_002517d4.c
 * Source line: 303000
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_002517d4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006d1e64();
  *(undefined1 *)(*(int *)(iVar1 + 500) + 0x4d7) = 0;
  iVar1 = FUN_006d1e64();
  *(undefined1 *)(iVar1 + 0x40) = 0;
  FUN_001a97a0(param_1 + 0x4c);
  DAT_0094ee40 = 0;
  DAT_0094ee3c = 1;
  return 2;
}
