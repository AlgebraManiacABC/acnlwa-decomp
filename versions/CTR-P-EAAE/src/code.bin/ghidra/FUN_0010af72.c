/**
 * FUN_0010af72.c
 * Source line: 109240
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0010af72(char *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  
  if (((*param_1 != '\0') && (*param_1 == '\x01')) && (0 < param_2)) {
    bVar1 = param_1[0x11];
    if (bVar1 != 0) {
      if (param_2 < (int)(uint)bVar1) {
        cVar2 = bVar1 - (char)param_2;
      }
      else {
        cVar2 = '\0';
      }
      param_1[0x11] = cVar2;
    }
  }
  return;
}
