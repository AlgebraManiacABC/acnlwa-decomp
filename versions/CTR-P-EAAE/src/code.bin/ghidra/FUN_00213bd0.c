#include "../../../include/types.h"

void FUN_00213bd0(int param_1)

{
  FUN_005e2f94(param_1 + 0x23c);
  FUN_00214ad8(param_1);
  *(undefined1 *)(param_1 + 0x3f7) = 0;
  FUN_004b9b64(param_1 + 0x2c,*(undefined4 *)(param_1 + 800));
  (**(code **)(**(int **)(param_1 + 800) + 8))(0);
  FUN_00568c10(param_1 + 0x2c);
}
