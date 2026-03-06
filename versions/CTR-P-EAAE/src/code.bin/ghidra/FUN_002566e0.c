/**
 * FUN_002566e0.c
 * Source line: 306028
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002566e0(int param_1)

{
  int iVar1;
  
  FUN_001c244c(0x3f800000,param_1 + 0x184,param_1 + 0x1c0,
               param_1 + (uint)*(byte *)(DAT_0095bf68 + 0x11e) * 0x3c + 0x1fc);
  iVar1 = DAT_0095bf68;
  *(undefined2 *)(param_1 + 0x1b8) =
       *(undefined2 *)(param_1 + (uint)*(byte *)(DAT_0095bf68 + 0x11e) * 0x3c + 0x230);
  *(undefined2 *)(param_1 + 0x1ba) =
       *(undefined2 *)(param_1 + (uint)*(byte *)(iVar1 + 0x11e) * 0x3c + 0x232);
  return;
}
