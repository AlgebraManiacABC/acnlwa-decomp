/**
 * FUN_00569d60.c
 * Source line: 811317
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00569d60(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002fd108(0xa08,param_1,4);
  *puVar1 = &UNK_00906234;
  puVar1 = (undefined4 *)FUN_00125e08(puVar1 + 1);
  *puVar1 = &UNK_00906138;
  puVar1 = (undefined4 *)FUN_00125e08(puVar1 + 3);
  *puVar1 = &UNK_00906138;
  iVar2 = FUN_004b55f8(puVar1 + 3);
  iVar2 = FUN_0047e918(iVar2 + 0x2e4);
  iVar2 = FUN_004b9960(iVar2 + 100);
  iRam00975c20 = iVar2 + -0x364;
  return;
}
