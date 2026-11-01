#include "../../../include/types.h"

void FUN_00677cc0(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_2 + 1);
  iVar2 = FUN_0064f390((uint)bVar1);
  if ((iVar2 != 0) && ((int)((uint)*(byte *)(iVar2 + 7) << 0x1c) < 0)) {
    (**(code **)(&UNK_0084364c + (uint)bVar1 * 0x1c))(param_1,param_2);
    return;
  }
  return;
}
