/**
 * FUN_0022965c.c
 * Source line: 281353
 * Body lines: 13
 */
#include "../../../include/types.h"

bool FUN_0022965c(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *local_10;
  char *local_c;
  
  iRam00950838 = param_1;
  uVar2 = GET_BYTE_00957322();
  uVar1 = FUN_002f74e0(0x400000,uVar2);
  *(undefined1 *)(param_1 + 0x489c) = uVar1;
  local_10 = &DAT_009047f8;
  local_c = "BsWeatherRain";
  iVar3 = FUN_0031758c(param_1 + 0x124,0x1b50,uRam00952c48,&local_10,1,0);
  return iVar3 != 0;
}
