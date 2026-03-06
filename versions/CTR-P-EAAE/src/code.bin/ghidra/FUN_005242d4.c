/**
 * FUN_005242d4.c
 * Source line: 766916
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005242d4(void)

{
  int iVar1;
  
  if (piRam0095e0fc != NULL) {
    (**(code **)(*piRam0095e0fc + 4))();
    piRam0095e0fc = NULL;
  }
  iVar1 = 0;
  if (DAT_0095e0ca != '\0') {
    iVar1 = _DAT_0095e0f0;
  }
  if (DAT_0095e0ca != '\0' && iVar1 != 0) {
    FUN_002f88b8();
    _DAT_0095e0f0 = 0;
  }
  return;
}
