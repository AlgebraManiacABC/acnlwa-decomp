/**
 * FUN_007460b8.c
 * Source line: 1102246
 * Body lines: 3
 */
#include "../../../include/types.h"

undefined4 FUN_007460b8(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  return *(undefined4 *)(iVar1 + 0x48);
}
