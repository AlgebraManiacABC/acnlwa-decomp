/**
 * FUN_0044ebc0.c
 * Source line: 614860
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0044ebc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  __rt_memclr_w(param_1,0x340);
  iVar1 = FUN_00301d0c(param_1,&UNK_00457618,0x18,0x20);
  iVar1 = FUN_00426db4(iVar1 + 0x340,0xffffffff);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  FUN_00150bc0(iVar1 + -0x38,param_2,0x1f);
  *(undefined1 *)(iVar1 + -0x19) = 0;
  return iVar1 + -0x340;
}
