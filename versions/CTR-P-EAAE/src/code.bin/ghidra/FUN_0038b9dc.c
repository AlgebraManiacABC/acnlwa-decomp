#include "../../../include/types.h"

void FUN_0038b9dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (piRam009702bc == NULL) {
    piRam009702bc = (int *)0xadf5c4;
  }
  (**(code **)(*piRam009702bc + 0x18))(piRam009702bc,param_1,param_2,param_3);
  return;
}
