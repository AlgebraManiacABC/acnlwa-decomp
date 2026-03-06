/**
 * FUN_001237d4.c
 * Source line: 125596
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001237d4(void)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 **)(iVar1 + 0x5c) = (undefined4 *)(iVar1 + 0x60);
  *(undefined **)(iVar1 + 100) = &DAT_00100798;
  *(undefined **)(iVar1 + 0x68) = &UNK_00123834;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined1 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  return;
}
