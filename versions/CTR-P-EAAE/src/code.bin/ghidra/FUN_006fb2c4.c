/**
 * FUN_006fb2c4.c
 * Source line: 1055197
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006fb2c4(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x80,uVar1);
  if ((iVar2 != 0) && (iVar2 = FUN_006fb030(in_stack_00000000), iVar2 == 0)) {
    FUN_006f9638(in_stack_00000000);
    uVar1 = FUN_002fae84();
    return uVar1;
  }
  return 0;
}
