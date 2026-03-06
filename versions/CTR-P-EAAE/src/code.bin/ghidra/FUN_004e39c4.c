/**
 * FUN_004e39c4.c
 * Source line: 727615
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_004e39c4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = GET_BYTE_00957322();
  if ((iVar1 == 0x35) && (iVar1 = FUN_004e9a28(0x9c7ad4,param_1,param_2,0), iVar1 != 0)) {
    *(ushort *)(iVar1 + 0x764) = *(ushort *)(iVar1 + 0x764) | 0x20;
    return 1;
  }
  return 0;
}
