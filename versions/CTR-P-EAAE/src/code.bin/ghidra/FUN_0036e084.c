/**
 * FUN_0036e084.c
 * Source line: 475596
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0036e084(int param_1)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  bool bVar4;
  
  psVar2 = *(short **)(param_1 + 4);
  psVar1 = (short *)0xadf5d0;
  iVar3 = 0x7f;
  while (bVar4 = iVar3 != 0, iVar3 += -1, bVar4) {
    *psVar1 = *psVar2;
    psVar1 = psVar1 + 1;
    if (*psVar2 != 0) {
      psVar2 = psVar2 + 1;
    }
  }
  return 0xadf5d0;
}
