/**
 * FUN_0071b2a8.c
 * Source line: 1073682
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0071b2a8(int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((*(int *)(param_1 + 0x104) != 0) && (iVar1 = FUN_007237e0(param_1), iVar1 == 0)) {
    pcVar2 = *(code **)(param_1 + 0xb8);
    bVar3 = pcVar2 == FUN_002f635c;
    if (bVar3) {
      pcVar2 = *(code **)(param_1 + 0xbc);
    }
    if (!bVar3 || pcVar2 != NULL) {
      return *(undefined4 *)(*(int *)(param_1 + 0x104) + 200);
    }
  }
  return 0xffffffff;
}
