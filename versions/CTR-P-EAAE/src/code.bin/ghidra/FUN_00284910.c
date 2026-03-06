/**
 * FUN_00284910.c
 * Source line: 329172
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00284910(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00305f2c();
  if (((iVar1 == 2) &&
      (((iVar1 = GET_BYTE_00957322(), iVar1 == 0x67 || (iVar1 = GET_BYTE_00957322(), iVar1 == 0x68))
       && (iVar1 = FUN_003170f8(0xe,0), iVar1 != 0)))) && (*(char *)(param_1 + 0x13) == '\0')) {
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    return 1;
  }
  return 0;
}
