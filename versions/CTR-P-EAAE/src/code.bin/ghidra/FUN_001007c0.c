#include "../../../include/types.h"

void FUN_001007c0(void)

{
  if (piRam00952ca8 != NULL) {
    (**(code **)(*piRam00952ca8 + 0x10))();
  }
  piRam00952ca8 = NULL;
  return;
}
