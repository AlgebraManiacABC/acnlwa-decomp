/**
 * FUN_004c7a48.c
 * Source line: 707475
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_004c7a48(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004c515c();
  *puVar1 = &UNK_00902078;
  puVar1[0x47] = param_2;
  *(undefined1 *)(puVar1 + 0x48) = 0;
  *(undefined1 *)((int)puVar1 + 0x121) = 0;
  iVar2 = FUN_004d3260(puVar1 + 0x4a);
  return iVar2 + -0x128;
}
