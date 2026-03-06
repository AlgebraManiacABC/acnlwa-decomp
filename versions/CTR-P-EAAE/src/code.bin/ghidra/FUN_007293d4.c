/**
 * FUN_007293d4.c
 * Source line: 1082441
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_007293d4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x65) == '\0') {
    FUN_00355848(param_2);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  if (*(char *)(param_1 + 0x65) == '\0') {
    FUN_00355848(param_1);
  }
  iVar1 = thunk_FUN_00101852(*(undefined4 *)(param_1 + 0x60),uVar2);
  return iVar1 != 0;
}
