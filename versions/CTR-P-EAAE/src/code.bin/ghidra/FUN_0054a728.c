/**
 * FUN_0054a728.c
 * Source line: 790861
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0054a728(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00543c54(param_1,0x1c,0xffffffff,0xffffffff,0xf);
  puVar2 = (undefined4 *)FUN_00132174(iVar1 + 0x134);
  puVar2[4] = 0;
  *puVar2 = &UNK_00905434;
  puVar2[-0x4d] = &UNK_00905410;
  *(undefined1 *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[7] = 0;
  return;
}
