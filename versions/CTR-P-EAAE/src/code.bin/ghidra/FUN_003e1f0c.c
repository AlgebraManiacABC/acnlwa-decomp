/**
 * FUN_003e1f0c.c
 * Source line: 556516
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_003e1f0c(void)

{
  int iVar1;
  
  if (((uRam00974a20 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x974a20), iVar1 != 0)) {
    uRam00974a30 = 0xfffffffe;
    uRam00974a34 = 0xffffffff;
  }
  return 0x974a30;
}
