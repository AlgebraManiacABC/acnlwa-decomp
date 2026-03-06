/**
 * FUN_006d1ff0.c
 * Source line: 1031890
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_006d1ff0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((DAT_0094fd0e == '\x01') && (_DAT_0098c500 == 0)) &&
     ((DAT_0094fd3c == 0 || (*(char *)(DAT_0094fd3c + 0x1fe) == '\0')))) {
    DAT_0094fd0e = 2;
    DAT_0094fd0f = 0x84;
    uRam0094fd10 = 0;
    iVar1 = GET_BYTE_00957322();
    if (iVar1 != 0x46) {
      uVar2 = FUN_00584134();
      FUN_0058c514(uVar2,0x21);
    }
    return 1;
  }
  return 0;
}
