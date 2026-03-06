/**
 * FUN_00146098.c
 * Source line: 158106
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00146098(int param_1)

{
  *(undefined1 *)(param_1 + 0x6924) = 0;
  FUN_00146f68(param_1 + 0x54);
  __rt_memclr_w(param_1 + 0xfaf0,*(int *)(param_1 + 0x51e8) << 2);
  *(undefined4 *)(param_1 + 0xfb24) = 0;
  FUN_00147630(param_1 + 0x48a4);
  *(undefined4 *)(param_1 + 0x6928) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  return 0;
}
