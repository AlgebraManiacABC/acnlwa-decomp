/**
 * FUN_006d0170.c
 * Source line: 1030784
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006d0170(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != '\0') {
    iVar1 = FUN_004eedbc();
    uVar2 = FUN_004f1328(param_1 + 0xc);
    FUN_004eddd4(iVar1 + 0x40,uVar2);
    return;
  }
  return;
}
