/**
 * svcGetSystemTick.c
 * Source line: 129295
 * Body lines: 2
 */
#include "../../../include/types.h"

undefined4 svcGetSystemTick(undefined4 param_1)

{
  software_interrupt(GetSystemTick);
  return param_1;
}
