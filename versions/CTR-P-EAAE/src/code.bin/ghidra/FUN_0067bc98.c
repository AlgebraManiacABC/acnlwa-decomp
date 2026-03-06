/**
 * FUN_0067bc98.c
 * Source line: 984391
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_0067bc98(int param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  
  bVar1 = *(byte *)(param_1 + 0x171);
  bVar4 = (bVar1 & 1) != 0;
  if (bVar4) {
    *(byte *)(param_1 + 0x171) = bVar1 & 0xfe;
    cVar2 = *(char *)(param_1 + 0x8cb);
    cVar3 = *(char *)(param_1 + 0x8ca);
    FUN_00659630(param_1,(int)cVar3,(int)cVar2,param_2);
    FUN_00597784(param_1,(int)cVar3,(int)cVar2);
  }
  return bVar4;
}
