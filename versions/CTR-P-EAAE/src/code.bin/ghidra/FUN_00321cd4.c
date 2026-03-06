/**
 * FUN_00321cd4.c
 * Source line: 424849
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00321cd4(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00952c3c;
  if ((*(char *)(param_1 + 0x18) == '\0') && (DAT_00952c3c != 0)) {
    FUN_00275aa4(param_1 + 500);
    *(int *)(param_1 + 0x204) = param_1 + 0x58;
    FUN_0027646c(iVar1);
    FUN_002763bc(DAT_0094cff4,0,param_1 + 500);
    FUN_002a4b84(param_1 + 0x244);
    FUN_0012e804(0x3f800000,param_1 + 0x2c);
    FUN_0012e804(0x3f800000,param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}
