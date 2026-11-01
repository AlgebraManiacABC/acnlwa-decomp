#include "../../../include/types.h"

void FUN_00412b78(void)

{
  if (piRam00974a48 != NULL) {
    (**(code **)(*piRam00974a48 + 0x38))();
    if (piRam00974a48 != NULL) {
      (**(code **)(*piRam00974a48 + 0x30))();
    }
    piRam00974a48 = NULL;
  }
  return;
}
