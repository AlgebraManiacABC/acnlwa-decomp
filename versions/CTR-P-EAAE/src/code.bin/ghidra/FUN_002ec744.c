/**
 * FUN_002ec744.c
 * Source line: 384987
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_002ec744(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x9a8) != '\x02') {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x9ac);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_001ceb78(param_1 + 0xb24,iVar1,0,((uint)*(byte *)(iVar1 + 0x570e) << 0x19) >> 0x1f
                           ,0,4), iVar1 != 0)) {
    return 1;
  }
  return 0;
}
