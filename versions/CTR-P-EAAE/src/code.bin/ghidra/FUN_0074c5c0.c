/**
 * FUN_0074c5c0.c
 * Source line: 1105369
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0074c5c0(uint *param_1,int param_2)

{
  int iVar1;
  
  if (((*param_1 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x9824e0), iVar1 != 0)) {
    puRam009824e4 = &UNK_00904adc;
  }
  if (param_2 != 0x9824e4) {
    if (((uRam00982430 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x982430), iVar1 != 0)) {
      puRam00982434 = &UNK_00904a34;
    }
    if (param_2 != 0x982434) {
      return 0;
    }
  }
  return 1;
}
