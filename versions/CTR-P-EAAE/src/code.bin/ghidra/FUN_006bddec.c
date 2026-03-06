/**
 * FUN_006bddec.c
 * Source line: 1019736
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006bddec(int param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x570e) = *(byte *)(param_1 + 0x570e) & 0xbf;
  if ((int)((uint)*(byte *)(param_1 + 0x5720) << 0x1c) < 0) {
    if ((int)((uint)*(byte *)(param_1 + 0x5718) << 0x1c) < 0) {
      iVar1 = FUN_005c257c(param_1);
      if (iVar1 == 0) goto LAB_006bde54;
      *(byte *)(param_1 + 0x5718) = *(byte *)(param_1 + 0x5718) & 0xf7;
    }
    *(byte *)(param_1 + 0x5720) = *(byte *)(param_1 + 0x5720) & 0xf7;
  }
LAB_006bde54:
  if ((*(char *)(param_1 + 0x5726) < '\0') && (iVar1 = FUN_005c6024(param_1), iVar1 != 0)) {
    *(byte *)(param_1 + 0x5726) = *(byte *)(param_1 + 0x5726) & 0x7f;
  }
  return;
}
