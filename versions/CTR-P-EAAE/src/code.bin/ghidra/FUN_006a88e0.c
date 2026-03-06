/**
 * FUN_006a88e0.c
 * Source line: 1004973
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_006a88e0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008f8b60;
  iVar1 = FUN_00301d0c(param_1 + 1,FUN_003166a8,0x18,0x10);
  *(undefined4 *)(iVar1 + 0x180) = 0;
  *(undefined4 *)(iVar1 + 0x184) = 0x10;
  *(undefined1 *)(iVar1 + 0x188) = 0;
  return;
}
