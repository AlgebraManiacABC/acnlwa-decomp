/**
 * FUN_006e24d0.c
 * Source line: 1040988
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_006e24d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0075f1c4(DAT_0095362c + 0x7874,4);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x27c4) != '\0') {
      FUN_006174fc(DAT_0095362c);
      *(undefined1 *)(param_1 + 0x27c4) = 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
