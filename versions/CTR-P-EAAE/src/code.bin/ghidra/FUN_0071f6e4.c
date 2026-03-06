/**
 * FUN_0071f6e4.c
 * Source line: 1076821
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0071f6e4(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [52];
  
  iVar1 = FUN_002d0920(*param_1);
  if ((iVar1 != 0) && (iVar2 = thunk_FUN_005c33d0(*param_1,0), iVar2 != 0)) {
    FUN_0070ab44(iVar2 + 0x1b4,auStack_40,*(undefined4 *)(iVar2 + 0x25c),0);
    FUN_006c1678(iVar1,iVar2,auStack_40);
    return 1;
  }
  return 0;
}
