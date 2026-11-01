#include "../../../include/types.h"

void FUN_00414120(void)

{
  if (piRam00974a50 != NULL) {
    (**(code **)(*piRam00974a50 + 0xc))();
    piRam00974a50 = NULL;
  }
  return;
}
