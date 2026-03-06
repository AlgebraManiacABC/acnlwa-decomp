/**
 * FUN_005e7760.c
 * Source line: 897152
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_005e7760(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((*(char *)(param_1 + 0xd8) == '\0') && (iVar1 = FUN_00209358(param_1 + 0xdc), iVar1 != 0)) {
    iVar1 = 0;
    *(undefined1 *)(param_1 + 0xd8) = 1;
    do {
      puVar3 = (undefined4 *)(param_1 + 0x578 + iVar1 * 0x10);
      puVar2 = (undefined4 *)(param_1 + 0x518 + iVar1 * 0x10);
      FUN_005d69bc(*(undefined4 *)(param_1 + iVar1 * 4 + 0x1274),*puVar2,puVar2[1],*puVar3,puVar3[1]
                  );
      iVar1 += 1;
    } while (iVar1 < 6);
  }
  return (int)*(char *)(param_1 + 0xd8);
}
