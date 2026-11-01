#include "../../../include/types.h"

void FUN_0045fa70(void)

{
  if ((iRam00974a70 - 0x100000U < 0x3ff00000) && (*(int **)(iRam00974a70 + 8) != NULL)) {
    (**(code **)(**(int **)(iRam00974a70 + 8) + 8))();
    return;
  }
  return;
}
