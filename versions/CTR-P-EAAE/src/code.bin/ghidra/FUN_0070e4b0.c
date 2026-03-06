/**
 * FUN_0070e4b0.c
 * Source line: 1065656
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_0070e4b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00305f44();
  if ((iVar1 != 0) &&
     (iVar1 = FUN_00305f44(), (*(uint *)(param_1 + 8) & 1 << (iVar1 + 0x1aU & 0xff)) == 0)) {
    return 0;
  }
  return 1;
}
