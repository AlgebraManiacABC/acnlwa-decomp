/**
 * FUN_005ea540.c
 * Source line: 899108
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_005ea540(void)

{
  int iVar1;
  
  if (((uRam0095defc & 1) == 0) && (iVar1 = FUN_002fe7dc(0x95defc), iVar1 != 0)) {
    uRam00ad574c = 0xad5760;
    uRam00ad5750 = 1;
    puRam00ad5748 = &UNK_00909cb0;
    uRam00ad5754 = 4;
    uRam00ad5758 = 0xffffffff;
    uRam00ad575c = 0xffffffff;
    uRam00ad5760 = 0;
  }
  return 0xad5748;
}
