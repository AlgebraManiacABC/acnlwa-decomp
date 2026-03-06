/**
 * FUN_006b04f0.c
 * Source line: 1009350
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_006b04f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00567e24(param_1 + 0x2c,"Layout/passWin/m_psprt.arc");
  uVar2 = 0;
  if ((iVar1 != 0) &&
     (iVar1 = FUN_00567e24(param_1 + 0x274,"Layout/Key/key16.arc"), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
