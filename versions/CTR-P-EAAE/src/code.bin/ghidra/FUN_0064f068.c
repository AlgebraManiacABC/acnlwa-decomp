/**
 * FUN_0064f068.c
 * Source line: 961003
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0064f068(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0095c6d0;
  if (((DAT_0095c6d0 != 0) && (iVar2 = FUN_0076e6cc(DAT_0095c6d0), iVar2 == param_1)) &&
     ((param_2 == 0x40 || (*(char *)(iVar1 + 0x1c) == param_2)))) {
    return 1;
  }
  return 0;
}
