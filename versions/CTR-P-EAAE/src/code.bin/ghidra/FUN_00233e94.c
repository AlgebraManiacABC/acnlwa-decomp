/**
 * FUN_00233e94.c
 * Source line: 287502
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00233e94(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_40 [12];
  
  iVar2 = *(int *)(param_2 + 0xf0);
  *(undefined1 *)(iVar2 + 0x5cc) = 1;
  local_40[0] = 0;
  FUN_006ea834(0,0x40c00000,iVar2 + 0x78,0,0x107,2);
  *(undefined1 *)(iVar2 + 0x5cc) = 0;
  FUN_001c0c54(iVar2 + 0x9b4,0x1000540);
  FUN_0070ab44(*(int *)(iVar2 + 0x68),local_40,*(undefined4 *)(*(int *)(iVar2 + 0x68) + 0xc4),0);
  FUN_00207740(param_1,0x22e,local_40,0);
  uVar1 = FUN_00305f44();
  FUN_0018f6a0(_DAT_0094f3bc,uVar1,iVar2,9);
  return 1;
}
