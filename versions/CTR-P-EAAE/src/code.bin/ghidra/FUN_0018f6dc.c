/**
 * FUN_0018f6dc.c
 * Source line: 204029
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0018f6dc(int param_1,uint param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 4) && (iVar1 = param_1 + 0x14 + param_2 * 0x78, *(int *)(iVar1 + 0x44) == param_3))
  {
    *(undefined1 *)(iVar1 + 0x70) = param_4;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
