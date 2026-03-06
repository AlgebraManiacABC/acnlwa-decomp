/**
 * FUN_0076e524.c
 * Source line: 1131461
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_0076e524(int param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  int iVar1;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  Item_CopyAndReturn(&IStack_10,(Item_t *)(param_1 + (*(byte *)(param_1 + 0x24) & 1) * 0x10 + 0x3c))
  ;
  iVar1 = FUN_003117bc(&IStack_10);
  return iVar1 == 0xe;
}
