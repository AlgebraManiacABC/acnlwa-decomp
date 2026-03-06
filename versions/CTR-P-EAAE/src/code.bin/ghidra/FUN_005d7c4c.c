/**
 * FUN_005d7c4c.c
 * Source line: 885944
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005d7c4c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + param_2 * 0x44 + 0x11f60;
  uVar1 = FUN_0056d060((astruct_1 *)**(undefined4 **)(param_1 + 0x11cd0));
  if (uVar1 < 4) {
    FUN_00312a4c(DAT_0095debc,iVar2,"STR_Common",(uint)(byte)(&UNK_00890708)[uVar1]);
  }
  FUN_005edca8(param_1,iVar2);
  return;
}
