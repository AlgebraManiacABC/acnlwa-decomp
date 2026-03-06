/**
 * FUN_00400434.c
 * Source line: 570202
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_00400434(int param_1)

{
  int iVar1;
  code *pcVar2;
  uint unaff_r5;
  
  iVar1 = FUN_003e5f2c(*(undefined4 *)(iRam00974a48 + 0x20),param_1 + 0x5c);
  if ((iVar1 != 0) && (*(char *)(*(int *)(param_1 + 0x54) + 0x14) == -2)) {
    FUN_00426950(iRam0097d460 + 0xac,param_1 + 0x60);
    pcVar2 = (code *)**(undefined4 **)(iRam0097d460 + 0xac);
    (*pcVar2)((undefined4 *)(iRam0097d460 + 0xac),pcVar2,0x8000,0);
  }
  *(undefined **)(param_1 + 0x24) = &UNK_003fff0c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "NexConnectStationJob::tryCurrentAddress";
  return unaff_r5 & 0xff00;
}
