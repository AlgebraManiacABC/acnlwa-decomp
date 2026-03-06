/**
 * FUN_0075d990.c
 * Source line: 1118020
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0075d990(int param_1)

{
  int iVar1;
  
  iVar1 = GET_BYTE_00957322();
  if (iVar1 == 0xa1) {
    param_1 += 0x52c;
  }
  else {
    if (iVar1 != 0xa2) {
      return 0;
    }
    param_1 += 0x618;
  }
  return *(undefined4 *)(param_1 + 0xd0);
}
