/**
 * FUN_00440e48.c
 * Source line: 606714
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00440e48(int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  uRam00ae6226 = (undefined2)*(undefined4 *)(param_1 + 0x68);
  plVar1 = (longlong *)FUN_00429234();
  lVar2 = _ll_sdiv(*(longlong *)(param_1 + 0x60),*plVar1);
  iRam00ae6228 = (int)lVar2;
  if (iRam00ae6228 == 0) {
    iRam00ae6228 = -1;
  }
  uRam00ae622c = *(undefined1 *)(param_1 + 0x6c);
  uRam00ae622d = *(undefined1 *)(param_1 + 0x6d);
  uRam00ae62b9 = *(undefined1 *)(param_1 + 0x6e);
  return;
}
