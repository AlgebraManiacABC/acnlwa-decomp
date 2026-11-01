#include "../../../include/types.h"

void FUN_0031032c(int param_1)

{
  *(undefined1 *)(param_1 + 0x35b4) = 1;
  *(byte *)(*(int *)(param_1 + 0x2754) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0x2754) + 0xb7) & 0xfe | 1;
  *(byte *)(*(int *)(param_1 + 0x2750) + 0xb7) = *(byte *)(*(int *)(param_1 + 0x2750) + 0xb7) & 0xfe
  ;
  FUN_00568c10(param_1 + 0x4d0);
}
