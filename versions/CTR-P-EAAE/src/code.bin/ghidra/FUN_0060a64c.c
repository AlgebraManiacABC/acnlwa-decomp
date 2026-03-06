/**
 * FUN_0060a64c.c
 * Source line: 923184
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0060a64c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0030b6c4();
  if (iVar1 != 0) {
    if ((*(char *)(DAT_0095362c + 0x28df) == '\0') &&
       (iVar2 = FUN_00622fa0(DAT_0095362c + 0x7880,3), iVar1 = DAT_0095362c, iVar2 != 0)) {
      *(undefined4 *)(DAT_0095362c + 0x1b0) = 0xfffffffd;
      *(undefined4 *)(iVar1 + 0x1b4) = 0xffffffff;
    }
  }
  FUN_0081c0a0(param_1);
  return;
}
