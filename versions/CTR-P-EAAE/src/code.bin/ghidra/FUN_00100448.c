/**
 * FUN_00100448.c
 * Source line: 103585
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00100448(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  
  uVar2 = FUN_002f6e64(auStack_18,s_RealEstateHeap_0010047c);
  uVar2 = FUN_002f6e78(0xa5000,uVar2,param_1,1,0);
  iVar1 = DAT_0010048c;
  *(undefined4 *)(DAT_0010048c + 0x1c) = uVar2;
  FUN_002f6e8c(auStack_18);
  return *(undefined4 *)(iVar1 + 0x1c);
}
