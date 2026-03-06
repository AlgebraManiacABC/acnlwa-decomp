/**
 * FUN_00107634.c
 * Source line: 107942
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00107634(int param_1,uint param_2)

{
  uint *_dest;
  uint *_src;
  
  if (param_2 < 0xf) {
    _dest = (uint *)(param_2 * 0x1ac + param_1);
    while ((param_2 += 1, (int)param_2 < 0xf &&
           (_src = (uint *)(param_2 * 0x1ac + param_1),
           (int)((uint)*(ushort *)((int)_src + 0x1aa) << 0x1f) < 0))) {
      __rt_memcpy(_dest,_src,0x1ac);
      _dest = _src;
    }
    __rt_memclr(_dest,0x1ac);
    return;
  }
  return;
}
