/**
 * FUN_003c2ab4.c
 * Source line: 532854
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_003c2ab4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_10 [8];
  
  *param_1 = &UNK_008fe378;
  uVar1 = FUN_003d0cbc(auStack_10,&UNK_0089d3b8);
  iVar2 = FUN_00390f74(param_1 + 1,uVar1);
  FUN_003d0d6c(auStack_10);
  iVar2 = FUN_00382adc(iVar2 + 0x28);
  if (cRam009702b4 == '\0') {
    uRam0096b93c = 0x39d844;
    pcRam0096b940 = FUN_0039d88c;
    cRam009702b4 = '\x01';
  }
  return iVar2 + -0x2c;
}
