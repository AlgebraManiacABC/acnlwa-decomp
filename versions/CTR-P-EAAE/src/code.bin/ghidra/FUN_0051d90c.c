/**
 * FUN_0051d90c.c
 * Source line: 762535
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined1 FUN_0051d90c(uint param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_0030b6c4();
  if (iVar2 != 0 || param_2 != 0) {
    uVar1 = uRam00a8339d;
    if (param_1 == 0) {
      uVar1 = uRam00a8339e;
    }
    return uVar1;
  }
  return *(undefined1 *)(DAT_0095386c + (param_1 ^ 1) + 0x82);
}
