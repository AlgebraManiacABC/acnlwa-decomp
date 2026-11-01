#include "../../../include/types.h"

void FUN_00297b60(int param_1,int param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x26c) + 0xc) != 0) {
    FUN_004b6dc8();
  }
  if (param_2 != 0) {
    FUN_004b6d74(param_2,*(undefined4 *)(param_1 + 0x26c));
    FUN_00568c10(param_1 + 0x24c);
  }
  return;
}
