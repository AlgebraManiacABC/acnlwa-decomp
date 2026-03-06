/**
 * FUN_00428344.c
 * Source line: 591987
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00428344(int param_1)

{
  int iVar1;
  
  iVar1 = iRam00974a18 + 0x3c;
  thunk_FUN_00135748(iVar1);
  switch(*(undefined1 *)(param_1 + 4)) {
  case 1:
  case 2:
    FUN_004299b8(iRam00974a18,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  thunk_FUN_001357ec(iVar1);
  return;
}
