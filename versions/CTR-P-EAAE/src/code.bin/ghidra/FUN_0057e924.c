/**
 * FUN_0057e924.c
 * Source line: 825629
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0057e924(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x58c);
  iVar1 = FUN_0071ee8c(*(int *)(param_1 + 0x58c) + 0x398);
  if (iVar1 == 0) {
    FUN_002f6adc(*(int *)(param_1 + 0x58c) + 0x398);
    (**(code **)(*(int *)(*piVar2 + 0x398) + 0xc))();
    FUN_002688cc(*piVar2 + 0x398,0x46,0x52,"SYS_2D_UI");
    FUN_002cd2e0(*piVar2 + 0x398,0x100038f,1);
    FUN_0081aef8(param_1 + 0xa4,FUN_0057e9b8,0);
  }
  return;
}
