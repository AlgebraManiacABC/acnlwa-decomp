/**
 * FUN_00315df4.c
 * Source line: 417623
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00315df4(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((uRam00952bb4 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x952bb4), iVar1 != 0)) {
    uVar2 = Item_Set((Item_t *)0x952bb8,3);
    __aeabi_atexit(uVar2,NOP_002f777c,0x100000);
  }
  *(ushort *)(param_1 + 0xa54 + *param_2 * 2) =
       *(ushort *)(param_1 + 0xa54 + *param_2 * 2) & ~*(ushort *)(param_2 + 4);
  uVar2 = FUN_002fc948();
  FUN_002fc994(uVar2,(Item_t *)0x952bb8,param_2[2],param_2[3],0);
  *(ushort *)(param_1 + 0x1464 + *param_2 * 2) =
       *(ushort *)(param_1 + 0x1464 + *param_2 * 2) & ~*(ushort *)(param_2 + 4);
  return;
}
