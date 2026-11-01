#include "../../../include/types.h"

void FUN_001322f8(void)

{
  if (piRam00975c68 != NULL) {
    (**(code **)(*piRam00975c68 + 4))();
    piRam00975c68 = NULL;
  }
  return;
}
