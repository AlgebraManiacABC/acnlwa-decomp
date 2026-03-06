/**
 * FUN_007636ec.c
 * Source line: 1122251
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_007636ec(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_14 [12];
  
  FUN_006a6dbc(auStack_14);
  iVar1 = FUN_006c588c(auStack_14,0);
  if (iVar1 != 0x16) {
    FUN_007648b8(param_1,0,0,0x199,auStack_14);
    return;
  }
  FUN_007648b8(param_1,0,0,0x198,auStack_14);
  return;
}
