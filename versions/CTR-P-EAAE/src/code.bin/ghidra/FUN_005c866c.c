/**
 * FUN_005c866c.c
 * Source line: 877147
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_005c866c(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = _DAT_00aadaf0 == 0;
  iVar1 = param_1;
  if (!bVar2 && param_1 != 0) {
    iVar1 = _DAT_00aadaf0;
  }
  _DAT_00aadaf0 = iVar1;
  return bVar2 || param_1 == 0;
}
