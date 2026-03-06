/**
 * FUN_004d47cc.c
 * Source line: 717475
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_004d47cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004c515c();
  *puVar1 = &UNK_0090246c;
  puVar1[0x47] = param_2;
  *(undefined1 *)(puVar1 + 0x48) = 0;
  *(undefined1 *)((int)puVar1 + 0x121) = 0;
  iVar2 = FUN_004cdd28(puVar1 + 0x49);
  return iVar2 + -0x124;
}
