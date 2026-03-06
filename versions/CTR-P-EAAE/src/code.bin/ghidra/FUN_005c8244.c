/**
 * FUN_005c8244.c
 * Source line: 876969
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_005c8244(void)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0(4,0);
  if ((((((iVar1 != 0) && (*(char *)(iVar1 + 0x1a9) == -0x51)) &&
        (*(char *)(iVar1 + 0x8d0) == '\x01')) &&
       ((iVar1 = FUN_005c33d0(4,1), iVar1 == 0 || ((*(byte *)(iVar1 + 0x8c7) & 1) == 0)))) &&
      ((iVar1 = FUN_005c33d0(4,1), iVar1 == 0 ||
       (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))))) &&
     ((iVar1 = FUN_005c33d0(4,1), iVar1 == 0 || (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c7) << 0x1a))
      ))) {
    return 1;
  }
  return 0;
}
