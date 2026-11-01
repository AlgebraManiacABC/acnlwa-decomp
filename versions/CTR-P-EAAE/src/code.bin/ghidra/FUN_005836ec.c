#include "../../../include/types.h"

undefined4 FUN_005836ec(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_0094d080 + 0x764) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(DAT_0094d080 + 0x764) + 0xb0);
  }
  return uVar1;
}
