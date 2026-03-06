/**
 * FUN_0024ef74.c
 * Source line: 301020
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0024ef74(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = GET_BYTE_00957322();
  if (iVar1 == 0x3e) {
    GET_DAT_0095bf74();
    return;
  }
  iVar1 = FUN_006fad7c();
  if (iVar1 == 0) {
    FUN_002fb94c();
    return;
  }
  FUN_0071c124(iVar1 + 0x5544,param_1);
  return;
}
