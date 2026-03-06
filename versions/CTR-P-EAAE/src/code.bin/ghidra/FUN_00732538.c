/**
 * FUN_00732538.c
 * Source line: 1088213
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00732538(int param_1)

{
  int iVar1;
  
  iVar1 = iRam00974a18 + 0x3c;
  thunk_FUN_00135748(iVar1);
  switch(*(undefined1 *)(param_1 + 4)) {
  default:
    thunk_FUN_001357ec(iVar1);
    return 0;
  case 1:
  case 2:
  case 3:
    thunk_FUN_001357ec(iVar1);
    return 1;
  }
}
