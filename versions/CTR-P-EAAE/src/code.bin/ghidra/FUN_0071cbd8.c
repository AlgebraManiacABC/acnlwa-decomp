/**
 * FUN_0071cbd8.c
 * Source line: 1074649
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0071cbd8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  while( true ) {
    if (puVar2 == NULL) {
      return 1;
    }
    iVar1 = (**(code **)(*(int *)*puVar2 + 0x90))((int *)*puVar2,param_2,param_3);
    if (iVar1 != 0) break;
    puVar2 = (undefined4 *)puVar2[1];
  }
  return 0;
}
