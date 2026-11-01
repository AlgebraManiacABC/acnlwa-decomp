#include "../../../include/types.h"

void FUN_0030eff4(int param_1)

{
  FUN_00305784(param_1,1);
  *(byte *)(*(int *)(param_1 + 0x2754) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0x2754) + 0xb7) & 0xfe | 1;
  *(byte *)(*(int *)(param_1 + 0x2750) + 0xb7) = *(byte *)(*(int *)(param_1 + 0x2750) + 0xb7) & 0xfe
  ;
  FUN_00568c10(param_1 + 0x4d0);
}
