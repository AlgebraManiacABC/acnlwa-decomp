/**
 * FUN_0022c120.c
 * Source line: 282683
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0022c120(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008ee238;
  param_1[0x11f] = &UNK_008ef320;
  param_1[0xe6] = &UNK_008ef2dc;
  FUN_002f76ac(param_1 + 300,FUN_002e0b3c,0x518,3);
  iVar1 = FUN_002f770c(param_1 + 0xe6);
  *(undefined **)(iVar1 + -0x398) = &DAT_008f18f4;
  iVar1 = FUN_00567ef0(iVar1 + -0x248);
  iVar1 = thunk_FUN_00569480(iVar1 + -0x14c);
  FUN_002ffb64(iVar1 + -4);
  return;
}
