/**
 * FUN_0019d9d0.c
 * Source line: 208884
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0019d9d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_005dd51c(param_1 + 0x28,_DAT_009506e8);
  FUN_005dd5b8(param_1 + 0x28,*(undefined4 *)(param_1 + 0xdc));
  uVar1 = *(undefined4 *)(DAT_0095deac + 0x14);
  FUN_00602144(uVar1,param_1 + 0x28);
  FUN_0060396c(uVar1,2);
  FUN_00602938(*(undefined4 *)(param_1 + 0x2c),1);
  iVar2 = FUN_006d1e64();
  *(undefined1 *)(param_1 + 0x1e9f) = *(undefined1 *)(iVar2 + 0x40);
  iVar2 = FUN_006d1e64();
  FUN_001fa354(*(undefined4 *)(iVar2 + 500));
  iVar2 = FUN_006d1e64();
  *(undefined1 *)(iVar2 + 0x40) = 0;
  return;
}
