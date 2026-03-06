/**
 * FUN_007c7610.c
 * Source line: 1171891
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_007c7610(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_001b02c0();
  *puVar1 = &UNK_008eb1a8;
  iVar2 = FUN_00301d0c(puVar1 + 699,&UNK_001c81a8,0x1c,8);
  iVar2 = FUN_00301d0c(iVar2 + 0xe0,FUN_002b6de0,0xe0,8);
  *(undefined4 *)(iVar2 + -0x20c) = 8;
  *(int *)(iVar2 + -0x9ac) = iVar2 + -0xe0;
  *(int *)(iVar2 + -0x1d0) = iVar2;
  return;
}
