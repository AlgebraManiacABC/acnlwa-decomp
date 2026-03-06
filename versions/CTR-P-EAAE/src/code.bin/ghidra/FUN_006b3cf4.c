/**
 * FUN_006b3cf4.c
 * Source line: 1011168
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006b3cf4(int *param_1)

{
  int iVar1;
  
  if (cRam0094d07d == '\0') {
    iVar1 = *param_1;
    if (((int)(uint)*(byte *)(iVar1 + 0x9d) < (int)uRam0094d084) ||
       ((*(byte *)(iVar1 + 0x9d) == uRam0094d084 && (cRam0094d07e != '\0')))) {
      if (iVar1 != 0) {
        FUN_00136e58(iVar1,0);
      }
      uRam0094d07c = 0;
    }
    cRam0094d07d = '\x01';
  }
  return;
}
