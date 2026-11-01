#include "../../../include/types.h"

void FUN_00585e24(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0x16) {
    *(undefined1 *)(param_1 + 8) = 1;
    FUN_00584074();
  }
  iVar1 = FUN_00292d28();
  if (iVar1 == 0) {
    FUN_00584074(0);
  }
  return;
}
