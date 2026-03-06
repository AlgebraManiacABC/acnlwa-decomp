/**
 * FUN_0048b278.c
 * Source line: 661351
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0048b278(int *param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  bool bVar2;
  
  if ((((*param_1 == param_2) && ((short)param_1[1] == -0x101)) &&
      (uVar1 = param_1[2], param_3 >> 0x18 == uVar1 >> 0x18)) &&
     (((uVar1 << 8) >> 0x18 <= (param_3 << 8) >> 0x18 && (param_3 * 0x1000000 <= uVar1 * 0x1000000))
     )) {
    bVar2 = (int)param_4 * 8 + 0x14U <= (uint)param_1[3];
    if (bVar2) {
      param_1 = (int *)(uint)*(ushort *)(param_1 + 4);
    }
    if (bVar2 && param_4 <= param_1) {
      return 1;
    }
  }
  return 0;
}
