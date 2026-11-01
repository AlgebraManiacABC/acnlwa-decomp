#include "../../../include/types.h"

void FUN_006b1aa0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x44);
  *(undefined4 *)(iVar1 + 0x2c) = param_1;
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xcf;
  FUN_00568c10(param_2 + 0x24);
}
