/**
 * FUN_0045fa10.c
 * Source line: 627439
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0045fa10(void)

{
  undefined4 uVar1;
  
  if (iRam00974a70 - 0x100000U < 0x3ff00000) {
    uVar1 = *(undefined4 *)(iRam00974a70 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
