/**
 * FUN_002b9aa4.c
 * Source line: 356087
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002b9aa4(int param_1,undefined1 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x4cf) = param_2;
  iVar1 = FUN_0056878c(param_1 + 0x270,&UNK_008794e4);
  *(byte *)(iVar1 + 0xb7) = *(byte *)(param_1 + 0x4cf) | *(byte *)(iVar1 + 0xb7) & 0xfe;
  return;
}
