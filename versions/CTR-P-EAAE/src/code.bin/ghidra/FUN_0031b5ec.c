/**
 * FUN_0031b5ec.c
 * Source line: 420717
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0031b5ec(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (iRam00981fc8 == 0) {
    FUN_0031bebc();
  }
  if (((uRam00981fb8 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x981fb8), iVar1 != 0)) {
    uVar2 = std::locale::locale((locale *)0x981fbc,p_Ram00981fc0);
    __aeabi_atexit(uVar2,0x31b855,0x100000);
  }
  return 0x981fbc;
}
