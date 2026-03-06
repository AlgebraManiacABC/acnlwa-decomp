/**
 * FUN_0071d74c.c
 * Source line: 1075163
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0071d74c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_002ff8b0(4);
  if (uVar1 < 4) {
    uVar3 = 0;
    do {
      iVar2 = FUN_0071d5f8(param_1 + uVar3 * 0x7dd80 + 0x2588,uVar1);
      if (iVar2 != 0) {
        return 1;
      }
      uVar3 += 1;
    } while (uVar3 < 3);
  }
  return 0;
}
