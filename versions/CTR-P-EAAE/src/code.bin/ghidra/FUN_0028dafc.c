/**
 * FUN_0028dafc.c
 * Source line: 333353
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0028dafc(int param_1,uint *param_2,byte param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_10;
  
  *param_2 = *(int *)(param_1 + 0x128) + 0x2ee;
  local_10 = param_4;
  iVar1 = FUN_00300904();
  if (iVar1 != 0) {
    uVar2 = *param_2;
    local_10 = (uVar2 >> 6 & 0xff) << 8;
    local_10 = CONCAT13((char)(uVar2 >> 0x16),CONCAT12((char)(uVar2 >> 0xe),(undefined2)local_10));
    local_10 = CONCAT31(local_10._1_3_,(byte)(uVar2 << 2) | param_3 & 3);
    FUN_006249b0(0x3f,4,&local_10);
  }
  return;
}
