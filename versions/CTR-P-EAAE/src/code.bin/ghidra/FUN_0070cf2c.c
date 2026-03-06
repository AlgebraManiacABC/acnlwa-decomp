/**
 * FUN_0070cf2c.c
 * Source line: 1064745
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0070cf2c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002fc900();
  if (iVar1 == 0) {
    uVar2 = FUN_003041c8();
    iVar1 = FUN_002f74e0(0x10,uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_003041c8();
      iVar1 = FUN_002f74e0(0x10,uVar2);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}
