/**
 * FUN_0017e9ac.c
 * Source line: 196784
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0017e9ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if ((cRam0095e307 == '\0') && (cRam0095e306 != '\0')) {
    nn::svc::SleepThread(16000000);
    cRam0095e306 = '\0';
  }
  uRam00981e70 = param_2;
  uRam00981e74 = param_3;
  uRam00981e78 = param_4;
  uRam00981e7c = param_5;
  uRam00981e80 = param_1;
  uRam00981e84 = FUN_001689e8(1);
  return;
}
