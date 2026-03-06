/**
 * FUN_00754bd0.c
 * Source line: 1110405
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00754bd0(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint *_src;
  
  iVar1 = FUN_00736728(*(undefined4 *)(param_1 + 4),1);
  if ((iVar1 != 0) && (uVar2 = FUN_00736694(*(undefined4 *)(param_1 + 4),1), uVar2 < 0x41)) {
    _src = (uint *)FUN_00736728(*(undefined4 *)(param_1 + 4),1);
    __rt_memcpy(param_2,_src,0x40);
    if (*param_2 == 0x31534433) {
      return 1;
    }
  }
  return 0;
}
