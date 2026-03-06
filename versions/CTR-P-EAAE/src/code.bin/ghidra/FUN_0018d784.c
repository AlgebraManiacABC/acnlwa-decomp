/**
 * FUN_0018d784.c
 * Source line: 203065
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0018d784(int param_1)

{
  int iVar1;
  
  FUN_0023ca00(param_1 + 0x4d4);
  FUN_00602938(*(undefined4 *)(param_1 + 0x6c),1);
  if (*(char *)(param_1 + 0xe9) == '\0') {
    iVar1 = 0;
    if ((_DAT_00aaf14c != 0) && (iVar1 = FUN_00716928(_DAT_00aaf14c + 0x89d0), iVar1 != 0)) {
      switchD_004d24fc::caseD_e(0);
    }
    *(char *)(param_1 + 0xe9) = (char)iVar1;
  }
  return;
}
