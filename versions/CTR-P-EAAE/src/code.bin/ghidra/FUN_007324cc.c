/**
 * FUN_007324cc.c
 * Source line: 1088192
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_007324cc(int param_1)

{
  int iVar1;
  
  iVar1 = iRam00974a18 + 0x3c;
  thunk_FUN_00135748(iVar1);
  switch(*(undefined1 *)(param_1 + 4)) {
  default:
    thunk_FUN_001357ec(iVar1);
    return 0;
  case 4:
  case 5:
  case 6:
    thunk_FUN_001357ec(iVar1);
    return 1;
  }
}
