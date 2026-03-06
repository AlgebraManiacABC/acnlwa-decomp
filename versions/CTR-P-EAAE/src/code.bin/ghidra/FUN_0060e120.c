/**
 * FUN_0060e120.c
 * Source line: 924799
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0060e120(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0056878c(param_1 + 0x108,&UNK_0087a3b0);
  if (param_2 == 0xd || param_2 == 0xe) {
    GET_DAT_0095bf74();
    return;
  }
  *(undefined4 *)(iVar1 + 0x40) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x44) = 0x3f800000;
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xcf;
  return;
}
