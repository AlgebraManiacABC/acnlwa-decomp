/**
 * FUN_00772e8c.c
 * Source line: 1134091
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00772e8c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *local_10;
  undefined *local_c;
  
  iVar1 = FUN_00713a70(param_1 + -0x7c);
  if (iVar1 != 0) {
    local_c = &UNK_00841c8c;
    local_10 = &DAT_009047f8;
    iVar1 = FUN_008273c8(iVar1,&local_10);
    if ((iVar1 != 0) && (_DAT_00aaf14c != 0)) {
      uVar2 = FUN_0071dcdc(_DAT_00aaf14c + 0x7008,*(undefined1 *)(param_1 + 0x1f5));
      return uVar2;
    }
  }
  return *(undefined4 *)(param_1 + 0x1e0);
}
