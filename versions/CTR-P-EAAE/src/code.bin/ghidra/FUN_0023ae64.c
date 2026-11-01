#include "../../../include/types.h"

void FUN_0023ae64(int *param_1)

{
  if (*(char *)param_1[0x23] == '\0') {
    FUN_00602144(*(undefined4 *)(DAT_0095deac + 0x14),param_1);
    FUN_00602938(param_1[1],1);
    FUN_00813b80(param_1 + 0x40,1);
  }
  else {
    FUN_005ffd94(*(undefined4 *)(DAT_0095deac + 0x18),param_1 + 0x1f,
                 *(undefined4 *)(DAT_0095deac + 0x14));
    FUN_006001f0(param_1[0x21],0);
  }
  (**(code **)(*param_1 + 0x11c))(param_1);
  return;
}
