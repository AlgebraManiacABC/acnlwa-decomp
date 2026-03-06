/**
 * FUN_0067334c.c
 * Source line: 980124
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0067334c(int param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0x8ce);
  cVar2 = *(char *)(param_1 + 0x8cf);
  if ((*(byte *)(param_1 + 0x171) & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x171) = *(byte *)(param_1 + 0x171) & 0xfe;
  FUN_0066a18c(param_1,(int)cVar1,(int)cVar2);
  FUN_00597784(param_1,(int)cVar1,(int)cVar2);
  return;
}
