/**
 * FUN_006640dc.c
 * Source line: 972402
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006640dc(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = *(byte *)(param_1 + 0x171);
  if ((bVar1 & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x171) = bVar1 & 0xfe;
  cVar2 = *(char *)(param_1 + 0x8cb);
  cVar3 = *(char *)(param_1 + 0x8ca);
  FUN_0065ddb8(param_1,(int)cVar3,(int)cVar2);
  FUN_00597784(param_1,(int)cVar3,(int)cVar2);
  return;
}
