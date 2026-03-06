/**
 * FUN_0070b260.c
 * Source line: 1062937
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0070b260(int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = FUN_007237e0(param_1 + 0xa00);
  if (iVar1 == 0) {
    pcVar2 = *(code **)(param_1 + 0xab8);
    bVar3 = pcVar2 == FUN_002f635c;
    if (bVar3) {
      pcVar2 = *(code **)(param_1 + 0xabc);
    }
    if (!bVar3 || pcVar2 != NULL) {
      return 0;
    }
  }
  return 1;
}
