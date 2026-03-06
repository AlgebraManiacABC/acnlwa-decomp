/**
 * FUN_002eea10.c
 * Source line: 385562
 * Body lines: 7
 */
#include "../../../include/types.h"

byte * FUN_002eea10(undefined4 *param_1)

{
  astruct *paVar1;
  
  *param_1 = &UNK_008f3cd4;
  paVar1 = astruct_Init((astruct *)(param_1 + 1));
  FUN_00125b3c(paVar1,"Insect/InsectFishBookParam.bin",DAT_00952c3c,0);
  paVar1[1].field0_0x0 = (int *)paVar1->data;
  pbRam0094ed40 = &paVar1[-1].byte_0xc;
  return &paVar1[-1].byte_0xc;
}
