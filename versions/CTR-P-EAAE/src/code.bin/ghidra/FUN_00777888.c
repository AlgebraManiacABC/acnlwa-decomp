/**
 * FUN_00777888.c
 * Source line: 1134891
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00777888(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (((*(char *)(param_1 + -0x38) != '\0') && (param_2 <= *(uint *)(param_1 + 0x20))) &&
     (*(uint *)(param_1 + 0x20) <= param_3)) {
    *(undefined1 *)(param_1 + -0x35) = 1;
    if (*(char *)(param_1 + 0x5e) != '\0') {
      uVar1 = FUN_004cad5c();
      FUN_001408c8(uVar1,param_1 + 0xc);
      *(undefined1 *)(param_1 + 0x5e) = 0;
    }
    if (*(char *)(param_1 + -0x37) != '\0') {
      *(undefined1 *)(param_1 + -0x37) = 0;
    }
  }
  return;
}
