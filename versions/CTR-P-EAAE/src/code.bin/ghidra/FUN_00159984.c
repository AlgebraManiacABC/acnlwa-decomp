/**
 * FUN_00159984.c
 * Source line: 172401
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_00159984(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00159e00(0x1c);
  *puVar1 = param_1;
  FUN_00159c50(puVar1,"MsgFlwBn");
  uVar2 = FUN_00159ee4(puVar1,&DAT_001599f4);
  puVar1[4] = uVar2;
  uVar2 = FUN_00159ee4(puVar1,&DAT_001599fc);
  puVar1[5] = uVar2;
  uVar2 = FUN_00159ee4(puVar1,&DAT_00159a04);
  puVar1[6] = uVar2;
  return puVar1;
}
