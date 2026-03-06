/**
 * FUN_0061ee10.c
 * Source line: 934174
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0061ee10(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0075dfe8(DAT_0095362c);
  if (iVar1 == 0) {
    *param_1 = 0xc;
  }
  else {
    iVar1 = DAT_0095362c + 0x10;
    FUN_00627f74(iVar1);
    FUN_0062801c(iVar1,0x72,0);
  }
  return 1;
}
