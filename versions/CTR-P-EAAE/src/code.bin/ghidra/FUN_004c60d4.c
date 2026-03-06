/**
 * FUN_004c60d4.c
 * Source line: 706349
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004c60d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004c515c();
  *puVar1 = &UNK_00901fac;
  iVar2 = FUN_004d1c2c(puVar1 + 0x46);
  iVar2 = FUN_004cfe88(iVar2 + 0x21fc);
  *(undefined4 *)(iVar2 + 0xd30) = param_2;
  iVar2 = FUN_00301d0c(iVar2 + 0xd34,&UNK_007e68f8,0x10,4);
  *(undefined1 *)(iVar2 + 0x246) = 0;
  *(undefined4 *)(iVar2 + 0x248) = 0;
  *(undefined4 *)(iVar2 + 0x24c) = 0;
  return;
}
