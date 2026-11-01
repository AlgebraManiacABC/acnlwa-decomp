#include "../../../include/types.h"

void FUN_00378020(void)

{
  int iVar1;
  
  iVar1 = FUN_00378054();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
