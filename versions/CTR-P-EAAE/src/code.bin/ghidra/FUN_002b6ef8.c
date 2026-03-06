/**
 * FUN_002b6ef8.c
 * Source line: 354425
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_002b6ef8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008f183c;
  FUN_00569774(param_1 + 8,0);
  FUN_00569774(param_1 + 0x12,0);
  FUN_00569774(param_1 + 0x1c,0);
  FUN_00569774(param_1 + 0x26,0);
  iVar1 = FUN_0056988c(param_1 + 0x26);
  iVar1 = FUN_0056988c(iVar1 + -0x28);
  iVar1 = FUN_0056988c(iVar1 + -0x28);
  iVar1 = FUN_0056988c(iVar1 + -0x28);
  return iVar1 + -0x20;
}
