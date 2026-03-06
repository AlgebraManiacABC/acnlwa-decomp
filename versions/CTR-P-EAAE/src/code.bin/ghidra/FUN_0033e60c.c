/**
 * FUN_0033e60c.c
 * Source line: 438644
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0033e60c(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((cVar1 == '\x03' || cVar1 == '\x04') || cVar1 == '\x05') {
    FUN_001426b0(*(undefined4 *)(iRam0094d090 + 0x28),0);
    param_1[0x5f0] = '\0';
    param_1[0x5f1] = '\0';
    param_1[0x5f2] = '\0';
    param_1[0x5f3] = '\0';
    *param_1 = '\x02';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  return;
}
