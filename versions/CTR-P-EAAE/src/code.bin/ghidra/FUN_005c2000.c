/**
 * FUN_005c2000.c
 * Source line: 871617
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_005c2000(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005c33d0(param_2,1);
  if (((iVar2 == 0) ||
      (cVar1 = *(char *)(iVar2 + 0x1a9), (cVar1 != '|' && cVar1 != '\x7f') && cVar1 != -0x52)) &&
     ((iVar2 = FUN_005c33d0(param_2,1), iVar2 == 0 ||
      (cVar1 = *(char *)(iVar2 + 0x1a9), (cVar1 != -0x56 && cVar1 != -0x53) && cVar1 != -0x52)))) {
    return 0;
  }
  if (param_1 != NULL) {
    *param_1 = *(undefined4 *)(iVar2 + 0x14);
    param_1[1] = *(undefined4 *)(iVar2 + 0x18);
    param_1[2] = *(undefined4 *)(iVar2 + 0x1c);
  }
  return 1;
}
