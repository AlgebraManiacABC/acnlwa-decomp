/**
 * FUN_005831a0.c
 * Source line: 828626
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005831a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [16];
  
  FUN_0076c6e4(param_2,auStack_20);
  if ((*(char *)(DAT_0094d080 + 0x6bc) == '\0') && (*(int *)(DAT_0094d080 + 0x74c) < 1)) {
    nnnstdMemCpy(&DAT_00986a80,auStack_20,0x10);
    iVar1 = DAT_0094d080;
    iVar2 = FUN_00767084(DAT_0094d080);
    if ((iVar2 == 0) && (*(char *)(iVar1 + 0xc5d) == '\0')) {
      FUN_0027680c(iVar1 + 0x68c,param_1,&DAT_00986a80);
    }
  }
  return;
}
