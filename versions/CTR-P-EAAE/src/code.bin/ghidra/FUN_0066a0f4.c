/**
 * FUN_0066a0f4.c
 * Source line: 975430
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0066a0f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) && (param_2 == 0)) {
    FUN_006f0130(0xd,1);
    iVar1 = FUN_0064c5e0();
    if ((iVar1 == 0) &&
       ((((iVar1 = FUN_002fe8a4(*(undefined1 *)(param_1 + 0x1ac)), iVar1 != 0 &&
          (iVar2 = FUN_0023d99c(), iVar2 != 0)) || (iVar2 = FUN_0023e254(iVar1), iVar2 != 0)) ||
        (iVar2 = FUN_0023e1e0(iVar1), iVar2 != 0)))) {
      FUN_0024b448(iVar1 + 0x8ae0,0x20,1);
      return;
    }
  }
  return;
}
