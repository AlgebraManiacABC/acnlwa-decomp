/**
 * FUN_005b40ac.c
 * Source line: 864331
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_005b40ac(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (DAT_00957328 != 0) {
    uVar1 = *(undefined4 *)(DAT_00957328 + 0xda8);
    uVar2 = *(undefined4 *)(DAT_00957328 + 0xdac);
    if (*(char *)(DAT_00957328 + 0xd88) != '\0') {
      *param_1 = *(undefined4 *)(DAT_00957328 + 0xda4);
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      return 1;
    }
  }
  return 0;
}
